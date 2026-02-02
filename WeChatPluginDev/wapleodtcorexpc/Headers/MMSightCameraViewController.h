//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderVideoTemplateInfo, MMShortVideoParamModel, NSMutableArray, NSString, RecommendedMusicInfo, ShortVideoToolbar;
@protocol MMSightCameraViewControllerDelegate;

@interface MMSightCameraViewController
{
    _Bool _needMaasEffect;
    _Bool _isLandscapeEnabled;
    _Bool _isForbiddenShortVideoToolBarAnimation;
    _Bool _isDismissByOutside;
    _Bool _isEditing;
    _Bool _isVCFrameUpdated;
    id <MMSightCameraViewControllerDelegate> _delegate;
    ShortVideoToolbar *_shortVideoToolbar;
    CDUnknownBlockType _startEditingAction;
    CDUnknownBlockType _endEditingAction;
    CDUnknownBlockType _customCameraCloseBlock;
    unsigned long long _shortVideoToolbarUIStyle;
    unsigned long long _scene;
    NSString *_finishButtonWording;
    RecommendedMusicInfo *_patMusicInfo;
    FinderVideoTemplateInfo *_templateInfo;
    unsigned long long _finderEventId;
    NSString *_shortURLForPreviewingTemplate;
    NSMutableArray *_wxToMaasMusicIds;
    unsigned long long _authScene;
    double _contentBottomPadding;
    unsigned long long _cameraMode;
    MMShortVideoParamModel *_reportModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isVCFrameUpdated; // @synthesize isVCFrameUpdated=_isVCFrameUpdated;
@property(retain, nonatomic) MMShortVideoParamModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) double contentBottomPadding; // @synthesize contentBottomPadding=_contentBottomPadding;
@property(nonatomic) _Bool isDismissByOutside; // @synthesize isDismissByOutside=_isDismissByOutside;
@property(nonatomic) _Bool isForbiddenShortVideoToolBarAnimation; // @synthesize isForbiddenShortVideoToolBarAnimation=_isForbiddenShortVideoToolBarAnimation;
@property(nonatomic) _Bool isLandscapeEnabled; // @synthesize isLandscapeEnabled=_isLandscapeEnabled;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(retain, nonatomic) NSMutableArray *wxToMaasMusicIds; // @synthesize wxToMaasMusicIds=_wxToMaasMusicIds;
@property(retain, nonatomic) NSString *shortURLForPreviewingTemplate; // @synthesize shortURLForPreviewingTemplate=_shortURLForPreviewingTemplate;
@property(nonatomic) _Bool needMaasEffect; // @synthesize needMaasEffect=_needMaasEffect;
@property(nonatomic) unsigned long long finderEventId; // @synthesize finderEventId=_finderEventId;
@property(retain, nonatomic) FinderVideoTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) NSString *finishButtonWording; // @synthesize finishButtonWording=_finishButtonWording;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long shortVideoToolbarUIStyle; // @synthesize shortVideoToolbarUIStyle=_shortVideoToolbarUIStyle;
@property(copy, nonatomic) CDUnknownBlockType customCameraCloseBlock; // @synthesize customCameraCloseBlock=_customCameraCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType endEditingAction; // @synthesize endEditingAction=_endEditingAction;
@property(copy, nonatomic) CDUnknownBlockType startEditingAction; // @synthesize startEditingAction=_startEditingAction;
@property(retain, nonatomic) ShortVideoToolbar *shortVideoToolbar; // @synthesize shortVideoToolbar=_shortVideoToolbar;
@property(nonatomic) __weak id <MMSightCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(id)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (id)toolbarBtnOrder;
- (void)reportCameraActionsLog;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)_relayoutShortVideoToolbar;
- (struct CGSize)_getSizeForShortVideoToolbar;
- (void)_rotateToOrientation:(long long)arg1 withAnimationDuration:(long long)arg2;
- (long long)_safeGetCurrentDeviceOrientation;
- (void)_initRotation;
- (void)sightCameraViewControllerDidRotate:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onCreateCameraPreviewView;
- (void)onShortVideoShootBtnClicked:(_Bool)arg1;
- (void)onEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onStartExportingWithAssetId:(id)arg1;
- (void)onCancelEditing;
- (void)onEndEditing;
- (void)onStartEditing;
- (void)onStartRecord;
- (id)chatUserNameForSightStatistics;
- (_Bool)isShowingCameraGuide;
- (void)onCameraResign;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (CDUnknownBlockType)onSightPictureWillTaken;
- (void)handleShortVideoWithPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (CDUnknownBlockType)onShortVideoWillTaken;
- (void)showImagePicker;
- (void)onShortVideoToolBtnClick:(unsigned long long)arg1;
- (id)currentViewController;
- (void)didFinishPickingAssetWithDataItem:(id)arg1;
- (unsigned long long)getUsedAuthScene;
- (void)closeAfterDone;
- (void)deActiveCamera;
- (void)close;
- (void)closeAfterTakenVideo;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)handleDefaultCameraFrontBackDevice;
- (void)activeCamera;
- (void)requestAuthForMicrophone:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)requestAuthForCamera:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)tryActiveCamera;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldInteractiveDismiss;
- (_Bool)enableVideo;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (_Bool)hidesStatusBar;
- (void)onCameraStop:(id)arg1;
- (void)didEnterBackground;
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

