//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayJSOpenLQTSaveLogicDelegate;

@interface WCPayJSOpenLQTSaveLogic
{
    id <WCPayJSOpenLQTSaveLogicDelegate> _m_delegate;
    NSString *_traceInfo;
    NSString *_operateId;
}

- (void).cxx_destruct;
@property(retain) NSString *operateId; // @synthesize operateId=_operateId;
@property(retain) NSString *traceInfo; // @synthesize traceInfo=_traceInfo;
@property __weak id <WCPayJSOpenLQTSaveLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onLQTMoneyControlLogicStop:(_Bool)arg1;
- (id)packageParam;
- (void)authOk;
- (void)authFail;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

