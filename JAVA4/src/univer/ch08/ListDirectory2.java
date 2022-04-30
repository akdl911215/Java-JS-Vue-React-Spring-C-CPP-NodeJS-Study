package univer.ch08;

import java.io.File;

public class ListDirectory2 {
    public static void main(String[] args) {
        File file = new File("c:\\windows");
        File files[] = file.listFiles();
        int i = 0;
        while(i < files.length) {
            System.out.println(files[i].getPath());
            System.out.println("\t" + files[i].length());
            i++;
        }
    }
}

/*
c:\windows\addins
	0
c:\windows\AhnInst.log
	124594
c:\windows\appcompat
	0
c:\windows\Application Data
	0
c:\windows\apppatch
	4096
c:\windows\AppReadiness
	0
c:\windows\assembly
	4096
c:\windows\bcastdvr
	0
c:\windows\bfsvc.exe
	81408
c:\windows\Boot
	4096
c:\windows\bootstat.dat
	67584
c:\windows\Branding
	0
c:\windows\CbsTemp
	0
c:\windows\comsetup.log
	762
c:\windows\Containers
	0
c:\windows\Core.xml
	29857
c:\windows\Cursors
	32768
c:\windows\debug
	0
c:\windows\diagerr.xml
	7623
c:\windows\diagnostics
	0
c:\windows\DiagTrack
	4096
c:\windows\diagwrn.xml
	7623
c:\windows\DigitalLocker
	0
c:\windows\Downloaded Program Files
	0
c:\windows\DtcInstall.log
	776
c:\windows\ELAMBKUP
	0
c:\windows\en-US
	0
c:\windows\explorer.exe
	5122632
c:\windows\Fonts
	98304
c:\windows\GameBarPresenceWriter
	0
c:\windows\Globalization
	0
c:\windows\Help
	0
c:\windows\HelpPane.exe
	1075712
c:\windows\hh.exe
	18432
c:\windows\hjimesv.ini
	69
c:\windows\IdentityCRL
	0
c:\windows\IME
	0
c:\windows\ImmersiveControlPanel
	4096
c:\windows\INF
	196608
c:\windows\InfusedApps
	0
c:\windows\InputMethod
	0
c:\windows\Installer
	196608
c:\windows\ko-KR
	4096
c:\windows\L2Schemas
	4096
c:\windows\LanguageOverlayCache
	0
c:\windows\LastGood.Tmp
	0
c:\windows\LiveKernelReports
	0
c:\windows\Logs
	4096
c:\windows\Media
	16384
c:\windows\mib.bin
	43131
c:\windows\Microsoft.NET
	4096
c:\windows\Migration
	0
c:\windows\ModemLogs
	0
c:\windows\notepad.exe
	201728
c:\windows\OCR
	0
c:\windows\Offline Web Pages
	0
c:\windows\Panther
	24576
c:\windows\Performance
	0
c:\windows\PFRO.log
	450410
c:\windows\PLA
	0
c:\windows\PolicyDefinitions
	4096
c:\windows\Prefetch
	196608
c:\windows\PrintDialog
	4096
c:\windows\Provisioning
	4096
c:\windows\regedit.exe
	370176
c:\windows\Registration
	0
c:\windows\rescache
	0
c:\windows\Resources
	0
c:\windows\SchCache
	0
c:\windows\schemas
	4096
c:\windows\security
	4096
c:\windows\ServiceProfiles
	0
c:\windows\ServiceState
	0
c:\windows\servicing
	4096
c:\windows\Setup
	0
c:\windows\setupact.log
	1792
c:\windows\setuperr.log
	0
c:\windows\ShellComponents
	0
c:\windows\ShellExperiences
	4096
c:\windows\SHELLNEW
	0
c:\windows\SKB
	0
c:\windows\SoftwareDistribution
	4096
c:\windows\SPD.ico
	7886
c:\windows\Speech
	0
c:\windows\Speech_OneCore
	0
c:\windows\splwow64.exe
	136192
c:\windows\ssopenfile.exe
	63320
c:\windows\System
	0
c:\windows\system.ini
	219
c:\windows\System32
	1048576
c:\windows\SystemApps
	12288
c:\windows\SystemResources
	28672
c:\windows\SystemTemp
	0
c:\windows\SysWOW64
	655360
c:\windows\TAPI
	0
c:\windows\Tasks
	0
c:\windows\Temp
	40960
c:\windows\TextInput
	0
c:\windows\tracing
	0
c:\windows\twain_32
	0
c:\windows\twain_32.dll
	65024
c:\windows\UpdateAssistant
	4096
c:\windows\Vss
	0
c:\windows\WaaS
	0
c:\windows\Web
	0
c:\windows\win.ini
	167
c:\windows\WindowsShell.Manifest
	670
c:\windows\WindowsUpdate.log
	276
c:\windows\winhlp32.exe
	11776
c:\windows\WinSxS
	11796480
c:\windows\WMSysPr9.prx
	316640
c:\windows\write.exe
	11264
*/