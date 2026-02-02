//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTCPNativeTask, NSString;

@interface MMTCPHandle : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct MBTcpScriptState *_tcpScriptState;
    void *_tcpMgr;
    MMTCPNativeTask *tcpTask;
    _Bool _jitMode;
    NSString *_appid;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseContext;
- (void)setLogDelegate:(id)arg1;
- (id)initOnJitModeWithAppId:(id)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end

