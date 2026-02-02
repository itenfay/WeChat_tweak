//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LockstepNativeTask;
@protocol MMLockstepHandleReportDelegate;

@interface MMLockstepHandle : NSObject
{
    struct OpaqueJSContext *_jscontext;
    void *_lockstepMgr;
    struct LockStepScriptState *_lockstepScriptState;
    LockstepNativeTask *lockstepTask;
    struct LockStepCallback *m_pCallback;
    id <MMLockstepHandleReportDelegate> _reportDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLockstepHandleReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)dealloc;
- (void)releaseContext;
- (void)setLogDelegate:(id)arg1;
- (void)setConfig:(map_c53b27e0)arg1;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end

