//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePaidConnectMicServiceInfo, MMFinderLiveTaskId, MMHeadImageView, MMTextView, MMUIButton, MMUILabel, MMUIMaskContainerView, NSArray, NSString, UIButton, UIScrollView, UIView;
@protocol MMFinderLivePaidConnectMicAudienceApplyPanelDelegate;

@interface MMFinderLivePaidConnectMicAudienceApplyPanel
{
    _Bool _allowAnonymous;
    _Bool _allowConsultInput;
    id <MMFinderLivePaidConnectMicAudienceApplyPanelDelegate> _delegate;
    MMUIMaskContainerView *_scrollContainerView;
    UIScrollView *_contentScrollView;
    MMHeadImageView *_headerImageView;
    MMUILabel *_titleLabel;
    MMUIButton *_ratingButton;
    MMUIButton *_settingButton;
    MMUILabel *_connectMicDurationDescLabel;
    UIView *_consultContentContainerView;
    MMTextView *_consultContentTextView;
    MMUILabel *_consultWordCountLabel;
    MMFinderLivePaidConnectMicServiceInfo *_serviceInfo;
    MMFinderLiveTaskId *_taskId;
    UIButton *_applyButton;
    MMUILabel *_waitingDescLabel;
    double _keyboardHeight;
    unsigned long long _applyType;
    NSArray *_connectMethodViews;
    UIView *_connectMethodBGView;
    UIView *_connectMethodTopLine;
    UIView *_connectMethodBottomLine;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowConsultInput; // @synthesize allowConsultInput=_allowConsultInput;
@property(nonatomic) _Bool allowAnonymous; // @synthesize allowAnonymous=_allowAnonymous;
@property(retain, nonatomic) UIView *connectMethodBottomLine; // @synthesize connectMethodBottomLine=_connectMethodBottomLine;
@property(retain, nonatomic) UIView *connectMethodTopLine; // @synthesize connectMethodTopLine=_connectMethodTopLine;
@property(retain, nonatomic) UIView *connectMethodBGView; // @synthesize connectMethodBGView=_connectMethodBGView;
@property(retain, nonatomic) NSArray *connectMethodViews; // @synthesize connectMethodViews=_connectMethodViews;
@property(nonatomic) unsigned long long applyType; // @synthesize applyType=_applyType;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMUILabel *waitingDescLabel; // @synthesize waitingDescLabel=_waitingDescLabel;
@property(retain, nonatomic) UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLivePaidConnectMicServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(retain, nonatomic) MMUILabel *consultWordCountLabel; // @synthesize consultWordCountLabel=_consultWordCountLabel;
@property(retain, nonatomic) MMTextView *consultContentTextView; // @synthesize consultContentTextView=_consultContentTextView;
@property(retain, nonatomic) UIView *consultContentContainerView; // @synthesize consultContentContainerView=_consultContentContainerView;
@property(retain, nonatomic) MMUILabel *connectMicDurationDescLabel; // @synthesize connectMicDurationDescLabel=_connectMicDurationDescLabel;
@property(retain, nonatomic) MMUIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) MMUIButton *ratingButton; // @synthesize ratingButton=_ratingButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMHeadImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) MMUIMaskContainerView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(nonatomic) __weak id <MMFinderLivePaidConnectMicAudienceApplyPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)internalSetupAndOpenLiteAppVC:(id)arg1;
- (void)pushLiteAppWithJumpInfo:(id)arg1;
- (void)fillUIWithServiceInfo;
- (double)pageSheetFullHeight;
- (double)pageSheetContentHeight;
- (id)buildGenericDescLabel;
- (_Bool)useBgColorStyleForConnectMethodViews;
- (_Bool)applyUsingVideo;
- (_Bool)applyWithAnonymousIdentity;
- (void)onCameraSettingsTapped;
- (void)onTapRatingButton;
- (void)onApply;
- (void)onClose;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)reloadMethodViewSelectState;
- (void)reloadContentScrollViewMask;
- (void)layoutConsultWordCountLabel;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)initUI;
- (void)didMoveToWindow;
- (id)getCurrentServiceInfo;
- (void)updateWithApplyInfo:(id)arg1;
- (void)updateWithServiceInfo:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1 serviceInfo:(id)arg2 allowAnonymousApply:(_Bool)arg3 allowConsultInput:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

