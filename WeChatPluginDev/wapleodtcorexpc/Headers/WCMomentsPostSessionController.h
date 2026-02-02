//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCMomentsPostReportSession, WCMomentsTemplateShareInfo;
@protocol WCCommitViewAnimationDelegate;

@interface WCMomentsPostSessionController : NSObject
{
    WCMomentsPostReportSession *_postReportSession;
    MMUIViewController<WCCommitViewAnimationDelegate> *_hostViewController;
    WCMomentsTemplateShareInfo *_currentShareInfo;
}

+ (unsigned long long)_convertSightSceneFromPickerScene:(int)arg1;
+ (id)safeCompositionAttrFromAssetInfo:(id)arg1;
+ (id)createVideoProducerVMWithAssetList:(id)arg1 createSameInfo:(id)arg2 postReportSession:(id)arg3 activityEventType:(unsigned int)arg4;
+ (_Bool)showAlertWithText:(id)arg1;
+ (_Bool)isAssetInfo:(id)arg1 exceedSightDurationForPickerScene:(int)arg2;
+ (_Bool)isLessThanMinDurationFor:(id)arg1 with:(id)arg2;
+ (_Bool)willExceedSumDurationIfAdd:(id)arg1 with:(id)arg2;
+ (_Bool)willExceedSumAssetsCountIfAdd:(id)arg1 with:(id)arg2;
+ (_Bool)willSelectMultiVideosIfAdd:(id)arg1 with:(id)arg2;
+ (_Bool)willSelectHybridAssetsIfAdd:(id)arg1 with:(id)arg2;
+ (long long)minDurationForVideoAsset;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsTemplateShareInfo *currentShareInfo; // @synthesize currentShareInfo=_currentShareInfo;
@property(nonatomic) __weak MMUIViewController<WCCommitViewAnimationDelegate> *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) WCMomentsPostReportSession *postReportSession; // @synthesize postReportSession=_postReportSession;
- (void)cancelAndClearPostReportSession;
- (void)clearPostReportSession;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onImagePickerManagerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onImagePickerManagerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerManagerStartEditing;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerDidAppear;
- (id)_onAssetPickerDidChangeAssetSelection:(id)arg1 withCurrentState:(id)arg2;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(_Bool)arg2 withCurrentState:(id)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(_Bool)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(_Bool)arg3;
- (void)_onPickNewSightDraft:(id)arg1 withError:(id)arg2 logNote:(id)arg3 fromEntrance:(long long)arg4 isAsyncComposite:(_Bool)arg5;
- (void)_startVideoProducerVCWithVM:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareVideoProducerVMWithAssetList:(id)arg1 currentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareVideoProducerWithAssetList:(id)arg1 withCurrentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_asyncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_syncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareCompositeTask:(id)arg1 withAsyncEnabled:(_Bool)arg2 fromAssetPicker:(id)arg3;
- (_Bool)_prepareAssetsForPost:(id)arg1 withAssetPickerState:(id)arg2 fromAssetPicker:(id)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)showAssetPickerFromSourceType:(long long)arg1 withShareInfo:(id)arg2 showCamera:(_Bool)arg3;
- (id)initWithHostViewController:(id)arg1 postReportSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

