//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UINavigationController;

@interface WebviewJSEventHandler_chooseHaowanMedia
{
    NSMutableArray *_localIds;
    unsigned long long _totalCount;
    UINavigationController *_startViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *startViewController; // @synthesize startViewController=_startViewController;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (void)trackEventChooseMediaCancel;
- (void)trackEventChooseMediaExplosure;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)handlePickingImageWithInfo:(id)arg1;
- (void)callbackWithVideoInfo:(id)arg1 extra:(id)arg2;
- (void)callbackCanceled;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidSkip:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)showImageAndVideoEditor:(unsigned long long)arg1;
- (void)showVideoEditor;
- (void)showImageEditor:(unsigned long long)arg1;
- (void)showAssetPicker:(id)arg1;
- (void)gameAlbumVideoDidChoose:(id)arg1 extraInfo:(id)arg2;
- (void)videoAlbumControllerDidSkip;
- (void)videoAlbumControllerDidExit;
- (void)showGameHaowanTabAlbum:(long long)arg1 params:(id)arg2;
- (void)showGameVideoAlbum:(long long)arg1 params:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

