//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageForwardAndEditLogicController, FavFullScreenImageButtonsContainerView, MMFullScreenItemView, MMImageActionSheet, MMScrollActionSheet, MMScrollView, NSMutableArray, NSMutableSet, NSString, ScanQRCodeLogicController, ScanQRCodeLogicParams, SimpleImgInfo, UIView, WCActionSheetWithScanWXCode;
@protocol FavFullScreenImageViewControllerDelegate;

@interface FavFullScreenImageViewController
{
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    MMScrollView *m_scrollView;
    UIView *m_blackMask;
    NSMutableArray *m_arrFavData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    unsigned int m_firstIndex;
    _Bool m_isRotating;
    _Bool m_isAnimationShowing;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    SimpleImgInfo *m_forwardDataSrc;
    SimpleImgInfo *m_editImageInfo;
    EditImageForwardAndEditLogicController *m_editImageLogicController;
    _Bool m_allowRotate;
    MMFullScreenItemView *m_currentContainer;
    FavFullScreenImageButtonsContainerView *m_buttonsContainerView;
    _Bool _m_canSelect;
    _Bool _m_needEditImage;
    _Bool _m_canEditImage;
    _Bool _forcePortrait;
    int _source;
    long long _m_longPressScanScene;
    UIView *_originView;
    id <FavFullScreenImageViewControllerDelegate> _m_delegate;
    ScanQRCodeLogicParams *_logicParams;
    MMImageActionSheet *_imageActionSheet;
    MMScrollActionSheet *_scrollActionSheet;
    NSMutableSet *_markTranslateSet;
}

+ (id)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4 canEdit:(_Bool)arg5 delegate:(id)arg6;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4 canEdit:(_Bool)arg5 delegate:(id)arg6;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4 canEdit:(_Bool)arg5;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *markTranslateSet; // @synthesize markTranslateSet=_markTranslateSet;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(retain, nonatomic) MMImageActionSheet *imageActionSheet; // @synthesize imageActionSheet=_imageActionSheet;
@property(retain, nonatomic) ScanQRCodeLogicParams *logicParams; // @synthesize logicParams=_logicParams;
@property(nonatomic) _Bool forcePortrait; // @synthesize forcePortrait=_forcePortrait;
@property(nonatomic) __weak id <FavFullScreenImageViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) __weak UIView *originView; // @synthesize originView=_originView;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) long long m_longPressScanScene; // @synthesize m_longPressScanScene=_m_longPressScanScene;
@property(nonatomic) _Bool m_canEditImage; // @synthesize m_canEditImage=_m_canEditImage;
@property(nonatomic) _Bool m_needEditImage; // @synthesize m_needEditImage=_m_needEditImage;
@property(nonatomic) _Bool m_canSelect; // @synthesize m_canSelect=_m_canSelect;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
- (void)reportTranslateMenuClick:(id)arg1;
- (void)onClickTransalteFeedbackButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickCancelTranslateButton;
- (void)onClickSavedPhotosAlbumButton;
- (void)displayOriginImage;
- (void)showActionSheetFromTranslateImg;
- (_Bool)isDisplayTranslateResult:(id)arg1;
- (void)unmarkDisplayTranslateResult:(id)arg1;
- (void)markDisplayTranslateResult:(id)arg1;
- (id)getFavForawrdViewController;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onEditImageForwardAndEditResult:(id)arg1;
- (void)onDismissEditView;
- (void)onShowingEditView;
- (id)getMessageUUID;
- (void)editImage;
- (void)onForward2WCRecordData;
- (void)onForward2MsgRecordData:(id)arg1;
- (void)dismissMySelfAndShowContext:(id)arg1 dataItem:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWillLongPress:(id)arg1 touchPoint:(struct CGPoint)arg2 onImage:(id)arg3;
- (void)onLongPressEvent:(id)arg1 onImage:(id)arg2;
- (void)onShowTranslateImage:(id)arg1;
- (id)translateImageIdentifier;
- (_Bool)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidClicked:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidAppear:(id)arg2;
- (id)customItemsArrayForImageActionSheet:(id)arg1;
- (void)startCircleToSearch:(unsigned long long)arg1 andEntrance:(unsigned long long)arg2;
- (_Bool)needAsyncDoAnimationHideDidStopHandle;
- (struct CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (id)checkOriginImgViewWhenAnimationHideWith:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (_Bool)isVideoNeedLazyDownload:(id)arg1;
- (void)tryToDownloadVideoWith:(id)arg1;
- (void)animationHideWithRotate;
- (_Bool)useAlphaAnimation;
- (_Bool)shouldAnimationWhenHide;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationShowStart;
- (void)animationHideStop;
- (void)onContainerAnimationHideStop;
- (id)getVisibleViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)downloadImage;
- (void)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3;
- (id)getAnimationControllerForDismissedController:(id)arg1;
- (void)hideVCAnimationWillCompleted:(CDUnknownBlockType)arg1;
- (void)showVCAnimation;
- (id)getImgInfoWithIndex:(unsigned int)arg1;
- (void)reloadContainerImgInfo:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3;
- (void)setRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3;
- (void)resetScrollView;
- (void)clearStatus;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)adjustViewAndNavBarRect;
- (void)onMemoryWarning;
- (void)dealloc;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

