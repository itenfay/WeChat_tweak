//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, EditImageForwardAndEditLogicController, MMHeadImageView, MMScrollActionSheet, MMUILabel, NSArray, NSString, NewDesignContactQRCodeInfo, TipsView, UIImage, UIImageView, UIView;

@interface NewPersonalQRCodeViewController
{
    _Bool _isNotAllowAddMeByQRCode;
    _Bool _isShowingInNewWindow;
    _Bool _includeOldImagePageMode;
    _Bool _needRefreshOldImage;
    unsigned int _lastEnterTime;
    unsigned int _pageMode;
    CContact *_contact;
    NewDesignContactQRCodeInfo *_colorQrCodeInfo;
    NewDesignContactQRCodeInfo *_whiteQrCodeInfo;
    NewDesignContactQRCodeInfo *_blackQrCodeInfo;
    UIImage *_qrCodeImageOld;
    UIView *_cardView;
    UIImageView *_qrCodeImageView;
    UIImageView *_backGroundView;
    MMHeadImageView *_headImageView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_locationLabel;
    MMUILabel *_footerWordingLabel;
    UIView *_buttonContainerView;
    UIView *_qrCodeNotAllowedView;
    NSArray *_dominatorColors;
    MMScrollActionSheet *_shareActionSheet;
    EditImageForwardAndEditLogicController *_editImageLogicController;
    TipsView *_abandonTipsView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int pageMode; // @synthesize pageMode=_pageMode;
@property(retain, nonatomic) TipsView *abandonTipsView; // @synthesize abandonTipsView=_abandonTipsView;
@property(nonatomic) _Bool needRefreshOldImage; // @synthesize needRefreshOldImage=_needRefreshOldImage;
@property(nonatomic) _Bool includeOldImagePageMode; // @synthesize includeOldImagePageMode=_includeOldImagePageMode;
@property(nonatomic) _Bool isShowingInNewWindow; // @synthesize isShowingInNewWindow=_isShowingInNewWindow;
@property(nonatomic) unsigned int lastEnterTime; // @synthesize lastEnterTime=_lastEnterTime;
@property(retain, nonatomic) EditImageForwardAndEditLogicController *editImageLogicController; // @synthesize editImageLogicController=_editImageLogicController;
@property(retain, nonatomic) MMScrollActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(retain, nonatomic) NSArray *dominatorColors; // @synthesize dominatorColors=_dominatorColors;
@property(retain, nonatomic) UIView *qrCodeNotAllowedView; // @synthesize qrCodeNotAllowedView=_qrCodeNotAllowedView;
@property(retain, nonatomic) UIView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain, nonatomic) MMUILabel *footerWordingLabel; // @synthesize footerWordingLabel=_footerWordingLabel;
@property(retain, nonatomic) MMUILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIImage *qrCodeImageOld; // @synthesize qrCodeImageOld=_qrCodeImageOld;
@property(retain, nonatomic) NewDesignContactQRCodeInfo *blackQrCodeInfo; // @synthesize blackQrCodeInfo=_blackQrCodeInfo;
@property(retain, nonatomic) NewDesignContactQRCodeInfo *whiteQrCodeInfo; // @synthesize whiteQrCodeInfo=_whiteQrCodeInfo;
@property(retain, nonatomic) NewDesignContactQRCodeInfo *colorQrCodeInfo; // @synthesize colorQrCodeInfo=_colorQrCodeInfo;
@property(nonatomic) _Bool isNotAllowAddMeByQRCode; // @synthesize isNotAllowAddMeByQRCode=_isNotAllowAddMeByQRCode;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (unsigned long long)getCurrentPatternIdForReport;
- (void)reportQRCodePageAction:(unsigned long long)arg1 qrCodeUrlWithStyle:(id)arg2;
- (void)reportQRCodePageAction:(unsigned long long)arg1;
- (void)updateHelloMsg;
- (void)onFriendAssistUnreadCountChanged;
- (void)onTipsViewClick:(id)arg1;
- (void)onTapBackground;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(_Bool)arg3;
- (void)setHasShowTip:(id)arg1;
- (void)onShowAbandonTip:(id)arg1 TipID:(id)arg2 Wording:(id)arg3;
- (void)onDownloadNewDesignQRCodeFailed:(id)arg1;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (_Bool)shouldInteractivePop;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (void)onEdit;
- (void)onShareQzone;
- (void)onShareQQ;
- (_Bool)canShareQQ;
- (void)onFav;
- (void)onShareTimeLine;
- (id)getCardImage;
- (void)saveImage;
- (void)scanQRCode;
- (void)forwardToContact:(id)arg1;
- (void)onForward;
- (id)getMenuItemArray;
- (void)onRevokeQRCode;
- (void)revokeQRCode;
- (void)changePageMode;
- (void)operate;
- (id)qrCodeUrlWithStyleForPageMode:(unsigned int)arg1;
- (id)codeImageForPageMode:(unsigned int)arg1;
- (_Bool)isNormalPageMode;
- (long long)preferredStatusBarStyle;
- (id)navigationTitleColor;
- (long long)overrideUserInterfaceStyle;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)willAppear;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadView;
- (id)getDisplayRegion;
- (id)getOpenIMIcon;
- (id)getChatRoomName;
- (id)getOpenIMIconAttachmentString;
- (id)getAttributedDisplayName;
- (void)updateDisplayNameLabelText;
- (id)genButtonWithTitle:(id)arg1;
- (void)initButtonView;
- (void)initQRCodeNotAllowedView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

