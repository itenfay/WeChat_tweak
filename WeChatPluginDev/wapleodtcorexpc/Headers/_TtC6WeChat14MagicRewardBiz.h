//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat14MagicRewardBiz : NSObject
{
    MISSING_TYPE *magicbrush;
    MISSING_TYPE *adapter;
    MISSING_TYPE *packageUDR;
    MISSING_TYPE *$__lazy_storage_$_mbVConsoleHelper;
    MISSING_TYPE *$__lazy_storage_$_semaphore;
    MISSING_TYPE *envStatus;
    MISSING_TYPE *eventTaskQueue;
    MISSING_TYPE *runtimeView;
    MISSING_TYPE *$__lazy_storage_$_rewardViewWeakMap;
    MISSING_TYPE *_rewardView;
}

- (void).cxx_destruct;
- (id)init;
- (void)onDestroy:(int)arg1;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)dealloc;

@end

