//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NFCCardTipsUIViewData, UIButton, UIImageView, UILabel, UIView, WCPayWebImageView;
@protocol WCPayNFCCardTipsViewControllerDelegate;

@interface WCPayNFCCardTipsViewController
{
    _Bool _needCheckTime;
    int _currentCountDownSec;
    id <WCPayNFCCardTipsViewControllerDelegate> _m_delegate;
    NFCCardTipsUIViewData *_m_viewData;
    UIView *_contentView;
    WCPayWebImageView *_cardLogoImageView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_countDownLabel;
    UIView *_middleTipsView;
    UIView *_upperLineView;
    UILabel *_middleLeftTextLabel;
    UILabel *_middleRightTextLabel;
    UIView *_lowerLineView;
    UIButton *_doneButton;
    CDUnknownBlockType _onDoneBlk;
    MMUIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType onDoneBlk; // @synthesize onDoneBlk=_onDoneBlk;
@property(nonatomic) _Bool needCheckTime; // @synthesize needCheckTime=_needCheckTime;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIView *lowerLineView; // @synthesize lowerLineView=_lowerLineView;
@property(retain, nonatomic) UILabel *middleRightTextLabel; // @synthesize middleRightTextLabel=_middleRightTextLabel;
@property(retain, nonatomic) UILabel *middleLeftTextLabel; // @synthesize middleLeftTextLabel=_middleLeftTextLabel;
@property(retain, nonatomic) UIView *upperLineView; // @synthesize upperLineView=_upperLineView;
@property(retain, nonatomic) UIView *middleTipsView; // @synthesize middleTipsView=_middleTipsView;
@property(nonatomic) int currentCountDownSec; // @synthesize currentCountDownSec=_currentCountDownSec;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WCPayWebImageView *cardLogoImageView; // @synthesize cardLogoImageView=_cardLogoImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NFCCardTipsUIViewData *m_viewData; // @synthesize m_viewData=_m_viewData;
@property(nonatomic) __weak id <WCPayNFCCardTipsViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onClickDoneBtn:(id)arg1;
- (void)updateDoneButton;
- (void)updateDesc;
- (void)updateTitle;
- (id)getStatusImage:(id)arg1;
- (void)updateCountDownLabel;
- (id)countDownLabelString;
- (void)ticking;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateCardLogo;
- (id)navigationBarBackgroundColor;
- (void)updateLoadingView;
- (void)updateViewData;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setViewData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setOnDoneCallBack:(CDUnknownBlockType)arg1;

@end

