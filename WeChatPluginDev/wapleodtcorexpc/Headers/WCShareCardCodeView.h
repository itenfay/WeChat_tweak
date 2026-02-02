//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUIActivityIndicatorView, MMUILabel, MMUIView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDynamicCodeGenerator;
@protocol WCCardDataSource, WCShareCardCodeViewDelegate;

@interface WCShareCardCodeView
{
    NSString *_shareUserName;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    id <WCCardDataSource> _cardDataSource;
    MMTimer *brightTimer;
    double _oldBrightness;
    double _toBrightness;
    struct CGSize biggerSize;
    UIView *_animateView;
    UILabel *_codeLabel;
    UIScrollView *_maskView;
    MMUIView *_whiteBgView;
    struct CGRect fromStartRect;
    MMUIActivityIndicatorView *activityIndicator;
    UIView *statusBgView;
    UIImageView *fakeQRCodeImgView;
    MMUILabel *_logoNameLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_showToWaiterTips;
    UIButton *_closeViewBtn;
    UIButton *_directPayBtn;
    UIButton *_notifyCheckBox;
    _Bool _bStatusBarBlack;
    unsigned long long _curStatus;
    _Bool _isLoading;
    MMTimer *_updateDynamicCodeTimer;
    id <WCShareCardCodeViewDelegate> m_delegate;
    NSString *_typeName;
    WCCardDynamicCodeGenerator *_dynamicCodeGenerator;
    NSString *_dynamicCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dynamicCode; // @synthesize dynamicCode=_dynamicCode;
@property(nonatomic) __weak WCCardDynamicCodeGenerator *dynamicCodeGenerator; // @synthesize dynamicCodeGenerator=_dynamicCodeGenerator;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(nonatomic) __weak id <WCShareCardCodeViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)loadDynamicCodeIfNeed;
- (void)updateDynamicCode;
- (void)startDynamicCodeUpdateTimer;
- (void)payAndQrcodeDidClick;
- (void)onClickNotifyCheckBoxBtn:(id)arg1;
- (void)timerCheckUpdateBrightness;
- (void)graduallySetBrightness:(double)arg1;
- (void)recoverBrightness:(double)arg1;
- (_Bool)isMemberCard;
- (id)getCodeViewWithCode:(id)arg1;
- (void)setupNewMemberCodeView;
- (void)setupOriginMemberCodeView;
- (void)setupMemberCardCodeView;
- (void)updateCardDatasource:(id)arg1;
- (void)updateViewStatus:(unsigned long long)arg1;
- (void)makeCancelBtn;
- (id)getLogoName;
- (void)showMarkedErrorView;
- (void)showMarkedView;
- (void)showTips:(id)arg1;
- (void)closeCodeView;
- (void)makeCheckBoxView;
- (void)showCodeViewWithAnimation;
- (void)showWithAnimation;
- (void)initView;
- (void)initShadowView;
- (id)getCurrentBrandColor;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCardSourceData:(id)arg1 andCodeStartRect:(struct CGRect)arg2 shareUserName:(id)arg3 isStatusBarBlack:(_Bool)arg4 dynamicCodeGenerator:(id)arg5;

@end

