//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGenericPaymentSheetView, MMFinderLiveTask, MMUIViewController, NSString;

@interface MMFinderLiveSuperfanGroupPaymentHelper : NSObject
{
    CDUnknownBlockType _onClickQuestionView;
    CDUnknownBlockType _onClickAgreement;
    MMUIViewController *_viewController;
    CDUnknownBlockType _paySuccessCallback;
    MMFinderLiveTask *_liveTask;
    unsigned long long _lastSelectedIndex;
    MMFinderLiveGenericPaymentSheetView *_sheetView;
    unsigned long long _subscriptionType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(nonatomic) __weak MMFinderLiveGenericPaymentSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) unsigned long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(copy, nonatomic) CDUnknownBlockType paySuccessCallback; // @synthesize paySuccessCallback=_paySuccessCallback;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType onClickAgreement; // @synthesize onClickAgreement=_onClickAgreement;
@property(copy, nonatomic) CDUnknownBlockType onClickQuestionView; // @synthesize onClickQuestionView=_onClickQuestionView;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (id)genConsumeParameterWithMode:(unsigned long long)arg1 resp:(id)arg2;
- (id)genConsumeParameterWithResp:(id)arg1;
- (id)genSubscribeParameterWithResp:(id)arg1;
- (void)checkSuperfanStateWithCheckCount:(id)arg1;
- (void)monthlySubscribeWithResp:(id)arg1;
- (void)buyOneMonthWithResp:(id)arg1;
- (void)paymentSheetView:(id)arg1 didClickAgreementUrl:(id)arg2;
- (void)paymentSheetViewDidClickQuestionView:(id)arg1;
- (void)_doJoinSuperfanWithType:(unsigned long long)arg1 subscriptionInfo:(id)arg2;
- (_Bool)isFollowAnchor;
- (void)_followAnchorWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentSheetView:(id)arg1 didClickPayWithItem:(id)arg2;
- (void)paymentSheetViewWillClose:(id)arg1;
- (void)hidePaymentViewAnimated:(_Bool)arg1;
- (void)showPaymentViewAnimated:(_Bool)arg1 resetToDefaultIndex:(_Bool)arg2;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

