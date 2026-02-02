//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveStickerEditingViewControllerConfiguration, MMFinderLiveStickerItemBase, MMFinderLiveStickerTextTemplatesPageSheet, MMFinderLiveTaskId, MMLiveObjectManipulationView, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MMFinderLiveStickerContentPicking, MMFinderLiveStickerEditingViewControllerDelegate, MMFinderLiveStickerReporting;

@interface MMFinderLiveStickerEditingViewController
{
    _Bool _deleteHighlighted;
    _Bool _needRecoverPreferOrientationMask;
    id <MMFinderLiveStickerEditingViewControllerDelegate> _delegate;
    unsigned long long _overrideOrientationMask;
    unsigned long long _preferOrientationMask;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveStickerItemBase *_originalStickerItem;
    MMFinderLiveStickerItemBase *_stickerItem;
    unsigned long long _state;
    MMFinderLiveStickerEditingViewControllerConfiguration *_configuration;
    NSString *_imageUpdateToken;
    UIView *_lightDismissView;
    UIView *_previewContainerView;
    UIView *_editingCanvasView;
    MMLiveObjectManipulationView *_manipulationView;
    UIView *_bottomBarContainerView;
    UIButton *_cancelButton;
    UIButton *_revertButton;
    UIButton *_confirmButton;
    MMFinderLiveStickerTextTemplatesPageSheet *_textTemplatesPageSheet;
    UIView *_deleteAreaView;
    UIImageView *_deleteIconView;
    UILabel *_deleteLabelView;
    id <MMFinderLiveStickerContentPicking> _contentPicker;
    id <MMFinderLiveStickerReporting> _reporter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRecoverPreferOrientationMask; // @synthesize needRecoverPreferOrientationMask=_needRecoverPreferOrientationMask;
@property(retain, nonatomic) id <MMFinderLiveStickerReporting> reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) id <MMFinderLiveStickerContentPicking> contentPicker; // @synthesize contentPicker=_contentPicker;
@property(retain, nonatomic) UILabel *deleteLabelView; // @synthesize deleteLabelView=_deleteLabelView;
@property(retain, nonatomic) UIImageView *deleteIconView; // @synthesize deleteIconView=_deleteIconView;
@property(retain, nonatomic) UIView *deleteAreaView; // @synthesize deleteAreaView=_deleteAreaView;
@property(retain, nonatomic) MMFinderLiveStickerTextTemplatesPageSheet *textTemplatesPageSheet; // @synthesize textTemplatesPageSheet=_textTemplatesPageSheet;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *revertButton; // @synthesize revertButton=_revertButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *bottomBarContainerView; // @synthesize bottomBarContainerView=_bottomBarContainerView;
@property(retain, nonatomic) MMLiveObjectManipulationView *manipulationView; // @synthesize manipulationView=_manipulationView;
@property(retain, nonatomic) UIView *editingCanvasView; // @synthesize editingCanvasView=_editingCanvasView;
@property(retain, nonatomic) UIView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(retain, nonatomic) UIView *lightDismissView; // @synthesize lightDismissView=_lightDismissView;
@property(retain, nonatomic) NSString *imageUpdateToken; // @synthesize imageUpdateToken=_imageUpdateToken;
@property(nonatomic) _Bool deleteHighlighted; // @synthesize deleteHighlighted=_deleteHighlighted;
@property(retain, nonatomic) MMFinderLiveStickerEditingViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) MMFinderLiveStickerItemBase *stickerItem; // @synthesize stickerItem=_stickerItem;
@property(retain, nonatomic) MMFinderLiveStickerItemBase *originalStickerItem; // @synthesize originalStickerItem=_originalStickerItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long preferOrientationMask; // @synthesize preferOrientationMask=_preferOrientationMask;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(nonatomic) __weak id <MMFinderLiveStickerEditingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invokeAutomaticConfirm;
- (void)cancelAutomaticConfirm;
- (void)scheduleAutomaticConfirm;
- (void)removeStickerManipulationView:(id)arg1;
- (CDStruct_91e28287)transformConstraintsForSticker:(id)arg1;
- (void)updateImageForSticker:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (struct CGAffineTransformComponents)constrainedTransformComponentsWithNeutralSize:(struct CGSize)arg1 neutralCenter:(struct CGPoint)arg2 constraints:(CDStruct_91e28287)arg3 desiredTransformComponents:(struct CGAffineTransformComponents)arg4;
- (struct CGAffineTransformComponents)decomposeManipulationTransform:(struct CGAffineTransform)arg1;
- (void)commitStickerItemChanges;
- (unsigned long long)reportingTypeForStickerType:(unsigned long long)arg1;
- (_Bool)shouldResetTransformAfterContentConfirmationForStickerType:(unsigned long long)arg1;
- (id)contentPickerForSticker:(id)arg1;
- (struct CGAffineTransform)defaultTransformWithNeutralSize:(struct CGSize)arg1 neutralCenter:(struct CGPoint)arg2 constraints:(CDStruct_91e28287)arg3 stickerItem:(id)arg4;
- (id)manipulationViewForStickerItem:(id)arg1;
- (void)setupManipulationViewForStickerItem:(id)arg1 resetTransformation:(_Bool)arg2;
- (void)showPickerAnimated:(_Bool)arg1;
- (void)setDeleteAreaHighlighing:(_Bool)arg1;
- (void)switchToState:(unsigned long long)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)liveTask;
- (void)layoutSubviews;
- (void)createBottomViews;
- (void)initializeComponents;
- (void)checkNeedRecoverPreferOrientationMask;
- (_Bool)isCurrentOrientationFitPreferOrientationMask;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 applyingOrConnectingMicWithOtherAnchorChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(struct CGRect)arg2;
- (void)onStickerTextTemplatesPageSheetFrameDidChange:(id)arg1;
- (void)onStickerTextTemplatesPageSheet:(id)arg1 selectionChanged:(id)arg2;
- (void)onStickerTextTemplatesPageSheet:(id)arg1 closedWithConfirmation:(_Bool)arg2;
- (id)stickerEditingView:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)onStickerContentPickingCanceled;
- (void)onStickerContentConfirmed:(id)arg1;
- (void)onManipulationViewTapped:(id)arg1;
- (void)onManipulationWillCancelOnView:(id)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 localTouchPosition:(struct CGPoint)arg3;
- (void)onManipulationWillEndOnView:(id)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 toTransformComponents:(struct CGAffineTransformComponents)arg3 localTouchPosition:(struct CGPoint)arg4 overrideTransformComponents:(struct CGAffineTransformComponents *)arg5;
- (void)onManipulationWillChangeOnView:(id)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 toTransformComponents:(struct CGAffineTransformComponents)arg3 localTouchPosition:(struct CGPoint)arg4 overrideTransformComponents:(struct CGAffineTransformComponents *)arg5;
- (void)onManipulationWillBeginOnView:(id)arg1 localTouchPosition:(struct CGPoint)arg2;
- (void)onConfirmTapped;
- (void)onRevertTapped;
- (void)onCancelTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)isLandscape;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1 stickerItem:(id)arg2 configuration:(id)arg3 reporter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

