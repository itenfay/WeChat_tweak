#import "WCPLCrashReporter.h"
#import "WCPLRealtimeLogUploader.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>

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
        wcpl_logRuntimeDiagnostics();
        [[WCPLCrashReporter sharedReporter] installIfNeeded];
        [[WCPLRealtimeLogUploader sharedUploader] startIfNeeded];
    }
}
