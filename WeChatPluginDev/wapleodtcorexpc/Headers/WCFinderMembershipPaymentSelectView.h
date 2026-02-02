//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIImageView, WCCoinConsumeParameter, WCFinderMembershipPaymentNoticeView, WCFinderMembershipPaymentSelectDetailView;
@protocol WCFinderMembershipPaymentSelectViewDelegate;

@interface WCFinderMembershipPaymentSelectView
{
    id <WCFinderMembershipPaymentSelectViewDelegate> _delegate;
    WCCoinConsumeParameter *_parameter;
    WCFinderMembershipPaymentSelectDetailView *_panelDetailView;
    UIImageView *_questionView;
    WCFinderMembershipPaymentNoticeView *_noticeView;
    NSArray *_memberPriceArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *memberPriceArray; // @synthesize memberPriceArray=_memberPriceArray;
@property(retain, nonatomic) WCFinderMembershipPaymentNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) UIImageView *questionView; // @synthesize questionView=_questionView;
@property(retain, nonatomic) WCFinderMembershipPaymentSelectDetailView *panelDetailView; // @synthesize panelDetailView=_panelDetailView;
@property(retain, nonatomic) WCCoinConsumeParameter *parameter; // @synthesize parameter=_parameter;
@property(nonatomic) __weak id <WCFinderMembershipPaymentSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)panelDidClickQuestionView:(id)arg1;
- (void)panelDidClickLink:(id)arg1;
- (void)panelDidClickConsume:(unsigned long long)arg1;
- (void)panelLayoutFinished;
- (double)contentFooterHeight;
- (double)contentHeaderHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithParameter:(id)arg1 memberPriceArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

