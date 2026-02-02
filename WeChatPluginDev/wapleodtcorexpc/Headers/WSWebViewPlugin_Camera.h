//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface WSWebViewPlugin_Camera
{
    MISSING_TYPE *searchEntity;
    MISSING_TYPE *isInitiativeSearch;
}

- (void).cxx_destruct;
- (id)init;
- (void)openCameraForImageSearch;
- (void)nativeImageSearchWithSource:(unsigned long long)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (id)getImagePickerOption;
- (void)didPickImage:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end

