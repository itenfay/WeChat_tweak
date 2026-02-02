//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJPublisher, NSString, UIViewController, WCFinderTemplateBindData;

@interface WCFinderRouterTemplateDelegateObj : NSObject
{
    MJPublisher *_mjPublisher;
    UIViewController *_hostVC;
    WCFinderTemplateBindData *_bindData;
}

+ (_Bool)checkIsChildViewController:(id)arg1;
+ (id)delegateObjWithHost:(id)arg1 bindData:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTemplateBindData *bindData; // @synthesize bindData=_bindData;
@property(nonatomic) __weak UIViewController *hostVC; // @synthesize hostVC=_hostVC;
@property(retain, nonatomic) MJPublisher *mjPublisher; // @synthesize mjPublisher=_mjPublisher;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(_Bool)arg4 editImageAttr:(id)arg5;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(_Bool)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_releaseSelf;
- (void)releaseSelf;
- (CDUnknownBlockType)processPostSessionModel;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(_Bool)arg1;
- (void)customBottomComposingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(_Bool)arg3;
- (_Bool)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)processWithSightDraft:(id)arg1 publisherPostInfo:(id)arg2;
- (void)processWithSightDraft:(id)arg1;
- (void)finderTemplateSelectVCDidPickSightDraft:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

