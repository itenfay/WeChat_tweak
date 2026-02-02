//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAlbumService
{
}

- (void)internalSaveImageData:(id)arg1 toAlbumNamed:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)internalSaveImagePath:(id)arg1 toAlbumNamed:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)internalSaveImages:(id)arg1 toAlbumNamed:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)findOrCreateAlbumWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showToast:(id)arg1 isSuccess:(_Bool)arg2;
- (void)internalSaveLivePhotoToAlbumWithImagePath:(id)arg1 videoPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveLivePhotoToAlbumWithImagePath:(id)arg1 videoPath:(id)arg2 stillImageTimeMs:(long long)arg3 isShowTips:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)saveLivePhotoToAlbumAndShowTipsWithImage:(id)arg1 videoPath:(id)arg2 stillImageTimeMs:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)saveLivePhotoToAlbumAndShowTipsWithImage:(id)arg1 videoPath:(id)arg2 stillImageTimeMs:(long long)arg3;
- (void)saveLivePhotoToAlbumAndShowTipsWithImagePath:(id)arg1 videoPath:(id)arg2 stillImageTimeMs:(long long)arg3;
- (void)saveLivePhotoToAlbumWithImagePath:(id)arg1 videoPath:(id)arg2 stillImageTimeMs:(long long)arg3;
- (void)saveImageDataToAlbumWithImageData:(id)arg1 isShowTips:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)saveImageDataToAlbumAndShowTipsWithImageData:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)saveImageDataToAlbumAndShowTipsWithImageData:(id)arg1;
- (void)saveImageDataToAlbumWithImageData:(id)arg1;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)saveImageToAlbumAndShowTipsWithArrImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)arg1;
- (void)saveImageToAlbumAndShowTipsWithPath:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)saveImageToAlbumAndShowTipsWithPath:(id)arg1;
- (void)internalSaveVideoToAlbumWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)exportRawVideoFile:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)saveVideoToAlbumWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveImageToAlbumWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)tryReadImageFileDataAndSave:(id)arg1 placeholder:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveVideoToAlbumWithPath:(id)arg1 isShowTips:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)arg1;
- (void)saveVideoToAlbumWithPath:(id)arg1;
- (void)writeImageToSavedArrPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)writeImageToSavedPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isAlbumAcessGranted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

