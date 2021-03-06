const util = require("util");
const crypto = require("crypto");

//  util.deprecate : 함수가 deprecated 처리되었음을 알려준다. 첫 번째 인자로 넣은 함수를 사용했을 때 경고 메시지가 출력된다.
// 두 번째 인자로 경고 메시지 내용을 넣으면 된다. 함수가 조만간 ㅏ라지거나 변경될 때 알려줄 수 있어 유용하다.
const dontUseMe = util.deprecate((x, y) => {
  console.log(x + y);
}, "dontUseMe 함수는 deprecated되었으니 더 이상 사용하지 마세요!");
dontUseMe(1, 2);

// util.promisify : 콜백 패턴을 프로미스 패턴으로 바꿔준다. 바꿀 함수를 인자로 제공하면 된다.
// 이렇게 바꾸어두면 async/await 패턴까지 사용할 수 있어 좋다.
const randomBytesPromise = util.promisify(crypto.randomBytes);
randomBytesPromise(64)
  .then((buf) => {
    console.log(buf.toString("base64"));
  })
  .catch((error) => {
    console.error(error);
  });

/*
3
(node:14952) DeprecationWarning: dontUseMe 함수는 deprecated되었으니 더 이상 사용하지 마세요!
(Use `node --trace-deprecation ...` to show where the warning was created)
oW8FdBNgeIbhSNHs6PsGBAwlitkL0gLZmq+jYb9IyRjFzKeP7jWI35GeY1Z89qICNTsdxYWSo/1V+/9eyOAV+g==
  */
