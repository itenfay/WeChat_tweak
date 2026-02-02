//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPublisher, MMUIViewController, NSString, WCActionSheetWithHeadAvatar, WCFinderCreateCoordinator, WCFinderPostActionSheetConfigArray;
@protocol WCFinderPostMgrDelegate;

@interface WCFinderPostMgr : NSObject
{
    int _userPrepareScene;
    unsigned int _profileEnterType;
    int _commentScene;
    long long _enterChildScene;
    unsigned long long _enterScene;
    id <WCFinderPostMgrDelegate> _delegate;
    WCFinderPostActionSheetConfigArray *_postSheetConfigArray;
    unsigned long long _directlyPostScene;
    WCFinderCreateCoordinator *_createCoordinator;
    unsigned long long _createFromType;
    unsigned long long _createScene;
    unsigned long long _shareScene;
    MMUIViewController *_currentVC;
    WCActionSheetWithHeadAvatar *_publishActionSheet;
    MJPublisher *_mjPublisher;
    unsigned long long _publisherEnterType;
}

+ (_Bool)canShowCameraBtn;
+ (_Bool)enableIpadPostMedia;
+ (_Bool)enableMJPublishEntry:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long publisherEnterType; // @synthesize publisherEnterType=_publisherEnterType;
@property(retain, nonatomic) MJPublisher *mjPublisher; // @synthesize mjPublisher=_mjPublisher;
@property(retain, nonatomic) WCActionSheetWithHeadAvatar *publishActionSheet; // @synthesize publishActionSheet=_publishActionSheet;
@property(nonatomic) __weak MMUIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) unsigned long long shareScene; // @synthesize shareScene=_shareScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long createScene; // @synthesize createScene=_createScene;
@property(nonatomic) unsigned long long createFromType; // @synthesize createFromType=_createFromType;
@property(nonatomic) unsigned int profileEnterType; // @synthesize profileEnterType=_profileEnterType;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) int userPrepareScene; // @synthesize userPrepareScene=_userPrepareScene;
@property(nonatomic) unsigned long long directlyPostScene; // @synthesize directlyPostScene=_directlyPostScene;
@property(retain, nonatomic) WCFinderPostActionSheetConfigArray *postSheetConfigArray; // @synthesize postSheetConfigArray=_postSheetConfigArray;
@property(nonatomic) __weak id <WCFinderPostMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) long long enterChildScene; // @synthesize enterChildScene=_enterChildScene;
- (void)processWithMJShootingSightDraft:(id)arg1 finderTask:(id)arg2 appliedMusicInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(_Bool)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(_Bool)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)startMovieComposingWithAssetInfos:(id)arg1 picker:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2;
- (void)showMiaojianFinderPublisherWithPickerEditingEnabled:(_Bool)arg1 shouldOpenMusicPanel:(_Bool)arg2 musicIDs:(id)arg3 contact:(id)arg4;
- (void)showMiaojianFinderPublisherWithPickerEditingEnabled:(_Bool)arg1 contact:(id)arg2;
- (void)handleFinderPublisherEntryTypeDirectActionWithContact:(id)arg1 info:(id)arg2;
- (void)showMiaojianFinderCameraViewController:(id)arg1 needTemplateEffect:(_Bool)arg2 byPassInfoDict:(id)arg3 musicIDs:(id)arg4;
- (void)postViewControllerDidSaveDraft;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerStartUpload;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)onImagePickerManagerOpenFinderCamera:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (id)mergeDataItemBusinessLogic:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (void)processWithSightDraft:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (unsigned long long)streamEntranceTypeFromPostScene:(unsigned long long)arg1;
- (void)showImagePickerByOptionObj:(id)arg1;
- (void)showFinderPublishViewWithByPassInfoDict:(id)arg1;
- (_Bool)isFrontCamera;
- (void)showFinderCameraViewController:(id)arg1 needTemplateEffect:(_Bool)arg2 byPassInfoDict:(id)arg3 musicIDs:(id)arg4;
- (void)showFinderCameraViewController:(id)arg1 needTemplateEffect:(_Bool)arg2 byPassInfoDict:(id)arg3;
- (void)reportPostRouteExtStatsForActionType:(int)arg1;
- (void)reportPostActionSheetBtnWithEvent:(_Bool)arg1 hasRedDot:(_Bool)arg2;
- (void)onClickHeadAvatarDismiss;
- (void)onClickHeadAvatarActionSheet;
- (unsigned long long)_getFinderFromAppInfoSource;
- (void)mergePostSessionFrom:(id)arg1;
- (_Bool)_enableShowPostConfigActionItem;
- (id)getActionSheetShootPath;
- (void)openFinderPublishAlbumDirectlyByContact:(id)arg1;
- (void)openAlbumPhotoByContact:(id)arg1;
- (id)genPostPassInfoDictByContact:(id)arg1;
- (void)enterMiaoJianFinderMovieComposingWithContact:(id)arg1;
- (void)showPostEntranceActionSheetWithIsMJPublisher:(_Bool)arg1 contact:(id)arg2 directly:(_Bool)arg3;
- (void)showPostEntranceActionSheetWithContact:(id)arg1 info:(id)arg2;
- (void)showPostEntranceActionSheetWithContact:(id)arg1;
- (void)showPostEntranceActionSheet;
- (void)updatePostEnterScene:(unsigned long long)arg1;
- (void)updatePostMgrWithParams:(id)arg1;
- (id)initWithParamsModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

