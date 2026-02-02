//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCoinSubscriptionAgreementDetailView, WecoinSubscriptionAgreementHalfPage;

@interface WCCoinSubscriptionAgreementView
{
    WecoinSubscriptionAgreementHalfPage *_pageData;
    CDUnknownBlockType _clickConfirmCallback;
    CDUnknownBlockType _clickCancelCallback;
    WCCoinSubscriptionAgreementDetailView *_panelDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCoinSubscriptionAgreementDetailView *panelDetailView; // @synthesize panelDetailView=_panelDetailView;
@property(copy, nonatomic) CDUnknownBlockType clickCancelCallback; // @synthesize clickCancelCallback=_clickCancelCallback;
@property(copy, nonatomic) CDUnknownBlockType clickConfirmCallback; // @synthesize clickConfirmCallback=_clickConfirmCallback;
@property(retain, nonatomic) WecoinSubscriptionAgreementHalfPage *pageData; // @synthesize pageData=_pageData;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

