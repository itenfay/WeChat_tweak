#import "WCPLCrashReporter.h"
#import "WCPLRealtimeLogUploader.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>

static void wcpl_appendProbeRecord(NSString *path, NSString *record) {
    if (![path isKindOfClass:[NSString class]] || path.length == 0) {
        return;
    }
    if (![record isKindOfClass:[NSString class]] || record.length == 0) {
        return;
    }

    NSFileHandle *fileHandle = [NSFileHandle fileHandleForWritingAtPath:path];
    if (!fileHandle) {
        [record writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:nil];
        return;
    }
    @try {
        [fileHandle seekToEndOfFile];
        NSData *data = [record dataUsingEncoding:NSUTF8StringEncoding];
        if (data.length > 0) {
            [fileHandle writeData:data];
        }
        [fileHandle closeFile];
    } @catch (__unused NSException *exception) {
    }
}

static void wcpl_appendBootProbe(NSString *line) {
    @autoreleasepool {
        NSString *globalProbePath = @"/var/mobile/Documents/wcpl_boot_probe_global.log";
        NSString *documentsPath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
        NSString *appProbePath = nil;
        if ([documentsPath isKindOfClass:[NSString class]] && documentsPath.length > 0) {
            appProbePath = [documentsPath stringByAppendingPathComponent:@"wcpl_boot_probe.log"];
        }

        NSString *timestamp = [[NSDate date] description];
        NSString *record = [NSString stringWithFormat:@"[%@] %@\n", timestamp, line ?: @"(nil)"];

        if (appProbePath.length > 0) {
            wcpl_appendProbeRecord(appProbePath, record);
        }

        if (![appProbePath isEqualToString:globalProbePath]) {
            wcpl_appendProbeRecord(globalProbePath, record);
        }
    }
}

static void wcpl_logRuntimeDiagnostics(void) {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    BOOL hasVarJB = [fileManager fileExistsAtPath:@"/var/jb"];
    BOOL hasElleKit = [fileManager fileExistsAtPath:@"/var/jb/usr/lib/libellekit.dylib"] || [fileManager fileExistsAtPath:@"/usr/lib/libellekit.dylib"];
    BOOL hasSubstrate = [fileManager fileExistsAtPath:@"/Library/MobileSubstrate/MobileSubstrate.dylib"] || [fileManager fileExistsAtPath:@"/var/jb/Library/MobileSubstrate/MobileSubstrate.dylib"];

    Class logicClass = objc_getClass("BaseMsgContentLogicController");
    BOOL canSendEmoticon = logicClass && [logicClass instancesRespondToSelector:@selector(SendEmoticonMessage:)];
    BOOL canSendImage = logicClass && [logicClass instancesRespondToSelector:@selector(SendImageMessage:withData:ImageInfo:)];

    Class messageMgrClass = objc_getClass("CMessageMgr");
    BOOL canAddEmoticon = messageMgrClass && [messageMgrClass instancesRespondToSelector:@selector(AddEmoticonMsg:MsgWrap:)];
    BOOL canAddMsg = messageMgrClass && [messageMgrClass instancesRespondToSelector:@selector(AddMsg:MsgWrap:)];

    NSString *summary = [NSString stringWithFormat:@"[WCPL] Runtime diag: var_jb=%d ellekit=%d substrate=%d logicClass=%d sendEmoticon=%d sendImage=%d addEmoticon=%d addMsg=%d",
                         hasVarJB ? 1 : 0,
                         hasElleKit ? 1 : 0,
                         hasSubstrate ? 1 : 0,
                         logicClass ? 1 : 0,
                         canSendEmoticon ? 1 : 0,
                         canSendImage ? 1 : 0,
                         canAddEmoticon ? 1 : 0,
                         canAddMsg ? 1 : 0];

    NSLog(@"%@", summary);
    WCPLLogInfo(@"%@", summary);
}

%ctor {
    @autoreleasepool {
        wcpl_appendBootProbe(@"ctor-enter");
        @try {
            wcpl_logRuntimeDiagnostics();
            wcpl_appendBootProbe(@"runtime-diag-ok");
            [[WCPLCrashReporter sharedReporter] installIfNeeded];
            wcpl_appendBootProbe(@"crash-reporter-ok");
            [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
            wcpl_appendBootProbe(@"realtime-uploader-ok");
        } @catch (NSException *exception) {
            wcpl_appendBootProbe([NSString stringWithFormat:@"ctor-exception: %@", exception.reason ?: @"unknown"]);
        }
    }
}
