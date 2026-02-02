//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveVerticalTextButtonView, MMLiveVerticalTextButtonViewConfig, MMScrollActionSheet, NSString, UIColor, UIView;
@protocol MMFinderLiveQrCodeReporter, MMFinderLiveQrCodeViewBase;

@interface MMFinderLiveQrCodeViewController
{
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _portraitEnsuranceDelegationBlock;
    ForwardMessageLogicController *_forwardLogic;
    MMScrollActionSheet *_scrollActionSheet;
    MMLiveVerticalTextButtonViewConfig *_portraitButtonConfig;
    MMLiveVerticalTextButtonViewConfig *_landscapeButtonConfig;
    MMFinderLiveTaskId *_taskId;
    UIView<MMFinderLiveQrCodeViewBase> *_containerView;
    MMLiveVerticalTextButtonView *_cancelButton;
    MMLiveVerticalTextButtonView *_savePhotoButton;
    MMLiveVerticalTextButtonView *_shareButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *savePhotoButton; // @synthesize savePhotoButton=_savePhotoButton;
@property(retain, nonatomic) MMLiveVerticalTextButtonView *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView<MMFinderLiveQrCodeViewBase> *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveVerticalTextButtonViewConfig *landscapeButtonConfig; // @synthesize landscapeButtonConfig=_landscapeButtonConfig;
@property(retain, nonatomic) MMLiveVerticalTextButtonViewConfig *portraitButtonConfig; // @synthesize portraitButtonConfig=_portraitButtonConfig;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(copy, nonatomic) CDUnknownBlockType portraitEnsuranceDelegationBlock; // @synthesize portraitEnsuranceDelegationBlock=_portraitEnsuranceDelegationBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void)updateButtonConfigForCurrentOrientation;
- (void)layoutInLandscapeWithUndefinedContainerViewAspectRatio;
- (void)layoutInPortraitWithUndefinedContainerViewAspectRatio;
- (void)layoutWithUndefinedContainerViewAspectRatio;
- (void)layoutInLandscapeWithContainerViewAspectRatio:(double)arg1;
- (void)layoutInPortraitWithContainerViewAspectRatio:(double)arg1;
- (void)layoutWithContainerViewAspectRatio:(double)arg1;
- (void)shareToMoments;
- (void)shareToChat:(id)arg1;
- (void)tapToClose:(id)arg1;
- (_Bool)shouldHideNavigationBar;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onSaveImageButtonClicked;
- (void)onShareButtonClicked;
@property(readonly, nonatomic) _Bool supportsLandscape;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) id <MMFinderLiveQrCodeReporter> reporter;
@property(readonly, nonatomic) UIColor *backdropColor;
- (id)createQrCodeView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willDisappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

