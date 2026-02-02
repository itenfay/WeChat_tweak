//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSDictionary, NSString;
@protocol WCPayJumpPayCardListLogicDelegate;

@interface WCPayJumpPayCardListLogic
{
    JSEvent *_m_jsEvent;
    id <WCPayJumpPayCardListLogicDelegate> _m_delegate;
    NSDictionary *_m_param;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *m_param; // @synthesize m_param=_m_param;
@property(nonatomic) __weak id <WCPayJumpPayCardListLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent=_m_jsEvent;
- (void)onWCPayCardListViewControllerWillBack;
- (void)onWCPayCardListViewControllerBack;
- (void)call:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithJSEvent:(id)arg1 delegate:(id)arg2 param:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

