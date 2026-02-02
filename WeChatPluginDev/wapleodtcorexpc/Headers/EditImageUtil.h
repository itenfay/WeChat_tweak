//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EditImageUtil
{
}

+ (struct CGRect)previewFrameWithImage:(id)arg1 baseSize:(struct CGSize)arg2 maxImageSizeRatio:(double)arg3;
+ (struct CGRect)previewFrameWithAVAsset:(id)arg1 baseSize:(struct CGSize)arg2;
+ (struct CGSize)getAVAssetSizeWithAVAsset:(id)arg1;
+ (id)dictionaryWithGPSInfoString:(id)arg1;
+ (struct CGSize)adjustRenderSize:(struct CGSize)arg1;
+ (id)getPrimaryColorForFromScene:(unsigned long long)arg1;
+ (id)getPrimaryColorForEntranceType:(unsigned long long)arg1;
+ (id)genPreviewImageWithAsset:(id)arg1 atTime:(double)arg2;
+ (id)createBlurImageWithOriginalImage:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)cropImageAccordingWithImage:(id)arg1;
+ (_Bool)isPreviewScaleAspectToFill:(id)arg1 entranceType:(unsigned int)arg2;
+ (_Bool)isCurrentEditEntranceFromFinder:(unsigned int)arg1;
+ (_Bool)isCurrentEditEntranceFromTimeLineAndGame:(unsigned int)arg1;
+ (_Bool)isCurrentEditEntranceFromStory:(unsigned int)arg1;
+ (_Bool)isCurrentEditEntranceFromTimeLine:(unsigned int)arg1;
+ (_Bool)isEditViewFullScreen:(unsigned int)arg1 editImageUIStyle:(unsigned long long)arg2;
+ (_Bool)isCurrentEditImageUIStyleModern:(unsigned long long)arg1;
+ (_Bool)isCurrentCaptureViewToEditImageUIStyleModern:(unsigned long long)arg1;
+ (unsigned long long)pickerEditImageUIStyle:(int)arg1;
+ (unsigned long long)convertImagePickerSceneToEditImageScene:(int)arg1;
+ (_Bool)isCropOnlyScene:(unsigned int)arg1;
+ (_Bool)isLongPressEntrance:(unsigned int)arg1;
+ (struct CGSize)getEditImageResultSizeIfLongImage:(struct CGSize)arg1;
+ (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
+ (double)getNearByInt:(double)arg1;
+ (_Bool)isNeedSaveEditedPhoto;
+ (void)savePhotoToSystemAlbum:(id)arg1;
+ (void)adjustView:(id)arg1 withSize:(struct CGSize)arg2;
+ (struct CGRect)getCenterFrameWithAspectRatio:(double)arg1 inRect:(struct CGRect)arg2;
+ (_Bool)editImageUndoRedoSwitchOn;

@end

