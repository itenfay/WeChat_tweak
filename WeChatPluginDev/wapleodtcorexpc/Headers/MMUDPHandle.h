//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUDPNativeTask, NSString;

@interface MMUDPHandle : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct MBUdpScriptState *_udpScriptState;
    void *_udpMgr;
    MMUDPNativeTask *udpTask;
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

