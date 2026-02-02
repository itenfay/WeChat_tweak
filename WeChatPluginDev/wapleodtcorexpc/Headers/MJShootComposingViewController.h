//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderVideoTemplateInfo, MJPublisherPickerComposingButtonManager, MJSCPickerEditingMediator, MJShootComposingView, MJShootComposingViewModel, MMImagePickerManagerOptionObj, MMShortVideoParamModel, MMTipsViewController, NSMutableArray, NSString;
@protocol MJShootComposingViewControllerDelegate;

@interface MJShootComposingViewController
{
    _Bool _isLandscapeEnabled;
    _Bool _isEditing;
    unsigned long long _shortVideoToolbarUIStyle;
    FinderVideoTemplateInfo *_templateInfo;
    unsigned long long _finderEventId;
    NSString *_shortURLForPreviewingTemplate;
    MJShootComposingView *_composingView;
    CDUnknownBlockType _startEditingAction;
    CDUnknownBlockType _endEditingAction;
    unsigned long long _authScene;
    NSMutableArray *_wxToMaasMusicIds;
    id <MJShootComposingViewControllerDelegate> _delegate;
    MJShootComposingViewModel *_viewModel;
    MJSCPickerEditingMediator *_pickerEdtingMediator;
    MMTipsViewController *_draftTipsVC;
    MJPublisherPickerComposingButtonManager *_pickerComposingButtonManager;
    MMShortVideoParamModel *_reportModel;
    unsigned long long _enterTime;
    NSString *_traceId;
    MMImagePickerManagerOptionObj *_optionObj;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) MMShortVideoParamModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) MJPublisherPickerComposingButtonManager *pickerComposingButtonManager; // @synthesize pickerComposingButtonManager=_pickerComposingButtonManager;
@property(nonatomic) __weak MMTipsViewController *draftTipsVC; // @synthesize draftTipsVC=_draftTipsVC;
@property(readonly, nonatomic) MJSCPickerEditingMediator *pickerEdtingMediator; // @synthesize pickerEdtingMediator=_pickerEdtingMediator;
@property(readonly, nonatomic) MJShootComposingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJShootComposingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *wxToMaasMusicIds; // @synthesize wxToMaasMusicIds=_wxToMaasMusicIds;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene=_authScene;
@property(copy, nonatomic) CDUnknownBlockType endEditingAction; // @synthesize endEditingAction=_endEditingAction;
@property(copy, nonatomic) CDUnknownBlockType startEditingAction; // @synthesize startEditingAction=_startEditingAction;
@property(retain, nonatomic) MJShootComposingView *composingView; // @synthesize composingView=_composingView;
@property(retain, nonatomic) NSString *shortURLForPreviewingTemplate; // @synthesize shortURLForPreviewingTemplate=_shortURLForPreviewingTemplate;
@property(nonatomic) unsigned long long finderEventId; // @synthesize finderEventId=_finderEventId;
@property(retain, nonatomic) FinderVideoTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(nonatomic) unsigned long long shortVideoToolbarUIStyle; // @synthesize shortVideoToolbarUIStyle=_shortVideoToolbarUIStyle;
@property(nonatomic) _Bool isLandscapeEnabled; // @synthesize isLandscapeEnabled=_isLandscapeEnabled;
- (void)registerYReportSdk;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)shouldInteractiveDismiss;
- (_Bool)useTransparentNavibar;
- (_Bool)hidesStatusBar;
- (_Bool)shouldAutorotate;
- (unsigned long long)getUsedAuthScene;
- (void)_closeShootComposingReport;
- (void)_initParams;
- (void)_postShootComposingVCDidDismissNotification;
- (void)closeShootComposingOnCamoSessionStarted;
- (void)closeShootComposingOnCamoSessionUnstarted;
- (void)closeShootComposing;
- (void)onCameraAuthoritiesUngranted;
- (void)onCameraAuthoritiesGranted;
- (void)requestAuthForMicrophone:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)requestAuthForCamera:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)requestCameraAuthorities;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (id)getReportExtInfoDismissState:(_Bool)arg1 eventCode:(long long)arg2;
- (void)finderReportLeavePage;
- (void)finderReportEnterPage;
- (void)onApplicationDidBecomeActiveNotification:(id)arg1;
- (void)onApplicationWillResignActiveNotification:(id)arg1;
- (void)didFinishTemplateComposing:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)didRecevieAIResultFromServerTimeoutInShootPreviewViewController:(id)arg1;
- (void)shootPreviewViewController:(id)arg1 didFinishClipWithInfo:(id)arg2;
- (void)shootPreviewViewController:(id)arg1 didFinishExportWithInfo:(id)arg2;
- (void)mediatorNotifyDidFinishPickShootAssetInfos:(id)arg1 picker:(id)arg2;
- (void)mediatorNotifyDidFinishPickMovieAssetInfos:(id)arg1 picker:(id)arg2;
- (void)mediatorNotifyDidFinishPickingAssetWithPostSession:(id)arg1;
- (void)mediatorNotifyDidFinishPickEditingSightWithInfo:(id)arg1;
- (void)mediatorNotifyDidFinishPickEditingWithActionFlow:(id)arg1;
- (void)mediatorNotifyDidFinishPickEditingWithEditImageAttr:(id)arg1;
- (void)mediatorNotifyDidCancelPickerFromShootScene;
- (void)mediatorNotifyDidCancelPickerFromMovieScene;
- (void)mediatorNotifyDidCancelPickerAndExitShootComposing;
- (void)_enterMiaoJianFinderComposingPublish;
- (void)prepareAlbumPickerShowingForShoot;
- (void)prepareAlbumPickerShowingForMovie;
- (long long)_safeGetCurrentDeviceOrientation;
- (void)initRotation;
- (void)_closeAfterTakenVideo;
- (void)_handleShortVideoWithPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(id)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)didClickAlbumPickerEntryForShootInView:(id)arg1;
- (void)didClickAlbumPickerEntryForMovieInView:(id)arg1;
- (void)onShortVideoShootBtnClicked:(_Bool)arg1;
- (void)onEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onStartExportingWithAssetId:(id)arg1;
- (void)onCancelEditing;
- (void)onEndEditing;
- (void)onStartEditing;
- (void)onStartRecord;
- (void)shootComposingView:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)shootComposingView:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingView:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(_Bool)arg4 editImageAttr:(id)arg5;
- (void)didFinishPickingAssetWithDataItem:(id)arg1;
- (void)handleCloseActionInShootComposingView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

