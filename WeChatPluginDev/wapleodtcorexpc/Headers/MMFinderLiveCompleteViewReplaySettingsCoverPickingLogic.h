//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest, NSString;

@interface MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic : NSObject
{
    MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest *_currentRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void)showAlbumPickerWithHostingVc:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showCameraPickerWithHostingVc:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isFrontCamera;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)showCoverPickingActionSheetInView:(id)arg1 pickerHostingVc:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

