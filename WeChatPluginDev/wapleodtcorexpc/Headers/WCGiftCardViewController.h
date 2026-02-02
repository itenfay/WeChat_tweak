//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIScrollView, WCBatchViewCardHelper, WCGiftCardData, WCGiftCardDetailView, WCGiftCardEnvelopeView, WCPreGiftCardData;

@interface WCGiftCardViewController
{
    unsigned int _bizUin;
    NSString *_currentUserName;
    WCPreGiftCardData *_preGiftCard;
    WCGiftCardData *_giftCard;
    NSString *_orderId;
    WCGiftCardEnvelopeView *_envelopeView;
    WCGiftCardDetailView *_detailView;
    long long _fromScence;
    UIScrollView *_scrollView;
    WCBatchViewCardHelper *_viewCardHelp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBatchViewCardHelper *viewCardHelp; // @synthesize viewCardHelp=_viewCardHelp;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long fromScence; // @synthesize fromScence=_fromScence;
@property(retain, nonatomic) WCGiftCardDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) WCGiftCardEnvelopeView *envelopeView; // @synthesize envelopeView=_envelopeView;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(retain, nonatomic) WCGiftCardData *giftCard; // @synthesize giftCard=_giftCard;
@property(retain, nonatomic) WCPreGiftCardData *preGiftCard; // @synthesize preGiftCard=_preGiftCard;
@property(retain, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
- (void)enterCouponListPage;
- (void)enterCardHomePage;
- (void)handleJumpNativeUrl:(id)arg1;
- (void)dismissSelf;
- (void)onBack;
- (void)onBatchViewCardReturn;
- (id)getDelegateViewController;
- (void)jumbToDetailCard;
- (void)openUrl:(id)arg1 returnBlock:(CDUnknownBlockType)arg2;
- (void)openUrl:(id)arg1;
- (void)openAppBranWithUserName:(id)arg1 brandPath:(id)arg2;
- (void)detailViewCenterButtonClick;
- (void)operationButtonDidClikced;
- (void)jumpButtonDidClikced;
- (_Bool)useTransparentNavibar;
- (void)popCon;
- (void)showConfirmAlertWithTitle:(id)arg1 sel:(SEL)arg2;
- (void)viewDidLayoutSubviews;
- (void)configDetailViewFrame;
- (void)showDetailView;
- (void)configEnvelopeViewFrame;
- (void)closeEnvelopeAndSelf;
- (void)showEnvelopeView;
- (void)handleFinshed;
- (void)handleLoading;
- (void)handleEnvelopse;
- (void)showEnvelopseAnimation;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showInViewController:(id)arg1;
- (id)initWithGiftCardData:(id)arg1;
- (id)initWithBizUin:(unsigned int)arg1 orderId:(id)arg2;
- (id)initWithPreGiftCardData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

