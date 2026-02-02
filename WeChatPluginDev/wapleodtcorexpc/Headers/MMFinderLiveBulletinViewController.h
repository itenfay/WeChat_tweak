//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, MMFinderLiveTask, MMGrowTextView, MMUIButton, MMUILabel, MMWebImageView, NSArray, NSString, UIButton, UIImage, UILabel, UIView, WCFinderCreateLiveViewModel;
@protocol MMFinderLiveBulletinViewControllerDelegate;

@interface MMFinderLiveBulletinViewController
{
    _Bool _isFromThemeGuide;
    _Bool _isEdit;
    _Bool _showNotice;
    _Bool _isBeingLayouted;
    _Bool _enableDescExtend;
    unsigned long long _scene;
    NSString *_descriptionExtend;
    NSString *_descriptionStr;
    NSString *_defaultImage;
    NSString *_placeHolderStr;
    id <MMFinderLiveBulletinViewControllerDelegate> _actionDelegate;
    MMFinderLiveTask *_liveTask;
    UIImage *_bulletinImage;
    MMWebImageView *_bulletinImageView;
    MMUIButton *_singleCloseButton;
    UIView *_bottomToolBar;
    NSArray *_bottomButtonArray;
    double _keyboardHeight;
    UIView *_noticeContainer;
    WCFinderCreateLiveViewModel *_createLiveVM;
    FinderNewUserPrepareResponse *_prepareResponse;
    MMUILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    MMGrowTextView *_growTextView;
    UILabel *_titleCountTips;
    UIView *_separateLineUnderDesc;
    MMGrowTextView *_descriptionTextView;
    UILabel *_descCountTips;
    UILabel *_wordCountTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *wordCountTips; // @synthesize wordCountTips=_wordCountTips;
@property(retain, nonatomic) UILabel *descCountTips; // @synthesize descCountTips=_descCountTips;
@property(retain, nonatomic) MMGrowTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UIView *separateLineUnderDesc; // @synthesize separateLineUnderDesc=_separateLineUnderDesc;
@property(retain, nonatomic) UILabel *titleCountTips; // @synthesize titleCountTips=_titleCountTips;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool enableDescExtend; // @synthesize enableDescExtend=_enableDescExtend;
@property(retain, nonatomic) FinderNewUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) UIView *noticeContainer; // @synthesize noticeContainer=_noticeContainer;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isBeingLayouted; // @synthesize isBeingLayouted=_isBeingLayouted;
@property(retain, nonatomic) NSArray *bottomButtonArray; // @synthesize bottomButtonArray=_bottomButtonArray;
@property(retain, nonatomic) UIView *bottomToolBar; // @synthesize bottomToolBar=_bottomToolBar;
@property(retain, nonatomic) MMUIButton *singleCloseButton; // @synthesize singleCloseButton=_singleCloseButton;
@property(retain, nonatomic) MMWebImageView *bulletinImageView; // @synthesize bulletinImageView=_bulletinImageView;
@property(retain, nonatomic) UIImage *bulletinImage; // @synthesize bulletinImage=_bulletinImage;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) __weak id <MMFinderLiveBulletinViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSString *placeHolderStr; // @synthesize placeHolderStr=_placeHolderStr;
@property(retain, nonatomic) NSString *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(retain, nonatomic) NSString *descriptionExtend; // @synthesize descriptionExtend=_descriptionExtend;
@property(nonatomic) _Bool showNotice; // @synthesize showNotice=_showNotice;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) _Bool isFromThemeGuide; // @synthesize isFromThemeGuide=_isFromThemeGuide;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)initBottomView;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)onTapCancel;
- (void)finishWithInfo:(id)arg1;
- (void)processBulletinData:(id)arg1;
- (void)onTapDone;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (double)maxDescriptionTextViewHeight;
- (void)layoutSubviewsAnimated:(_Bool)arg1;
- (_Bool)isPortrait;
- (double)getTextViewTop;
- (double)getTopButtonsTop;
- (void)onNoticeCloseButton:(id)arg1;
- (void)onSingleCloseButton:(id)arg1;
- (void)updateImageView;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (void)fixTitleText:(_Bool)arg1;
- (void)fixTopicText:(_Bool)arg1 openMaxLines:(_Bool)arg2;
- (void)updateRightDoneButton;
- (void)dealloc;
- (void)layoutUI;
- (void)createUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTask:(id)arg1 enableDescExtend:(_Bool)arg2 descriptionStr:(id)arg3 descriptionExtend:(id)arg4;
- (long long)overrideUserInterfaceStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

