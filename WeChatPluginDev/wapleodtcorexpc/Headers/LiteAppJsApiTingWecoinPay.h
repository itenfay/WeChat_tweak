//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMListenMembershipJoinInfo, MMPageSheetAdapter, NSString, TingWecoinPlugin;

@interface LiteAppJsApiTingWecoinPay
{
    MMListenMembershipJoinInfo *_joinInfo;
    TingWecoinPlugin *_logic;
    MMPageSheetAdapter *_pageAdapter;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(retain, nonatomic) TingWecoinPlugin *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) MMListenMembershipJoinInfo *joinInfo; // @synthesize joinInfo=_joinInfo;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)tingQQMembershipView:(id)arg1 wecoinButtonClicked:(id)arg2;
- (void)tingQQMembershipView:(id)arg1 confirmButtonClicked:(id)arg2;
- (void)_reportBuyMembershipSucceed:(_Bool)arg1;
- (void)showWecoinPayPanel;
- (void)showQQMemberBindingPage;
- (void)showResultPage:(id)arg1;
- (void)showErrorToast;
- (void)reset;
- (void)delayRefreshMembershipStatus;
- (void)callbackResult:(unsigned long long)arg1;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

