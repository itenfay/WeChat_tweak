//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisher, MMAsset, NSString, WCFinderCreateCoordinator;

@interface WAJSEventHandler_openChannelsRedPacketPublish
{
    _Bool _isUsingNewPublisher;
    MJPublisher *_mjPublisher;
    WCFinderCreateCoordinator *_createCoordinator;
    MMAsset *_finderAsset;
    unsigned long long _enterScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUsingNewPublisher; // @synthesize isUsingNewPublisher=_isUsingNewPublisher;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) MMAsset *finderAsset; // @synthesize finderAsset=_finderAsset;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) MJPublisher *mjPublisher; // @synthesize mjPublisher=_mjPublisher;
- (void)presentPostVCWith:(id)arg1;
- (void)openPostPageWithTitle:(id)arg1 jumpInfo:(id)arg2;
- (void)handleJSEventForOldPublisher:(id)arg1;
- (id)getFromVC;
- (void)postViewControllerPostSucForEnterScene:(unsigned long long)arg1 params:(id)arg2;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerStartUpload;
- (void)_onMJPublisherMovieComposingFinishFailed;
- (void)_startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(_Bool)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(_Bool)arg4 editImageAttr:(id)arg5;
- (void)onSightCameraCancel:(id)arg1;
- (void)handleJSEventForNewPublisher:(id)arg1;
- (void)handleJSEventOnAuthorized:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

