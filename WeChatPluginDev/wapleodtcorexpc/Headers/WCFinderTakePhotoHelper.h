//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface WCFinderTakePhotoHelper : NSObject
{
    UIViewController *_vc;
    CDUnknownBlockType _complete;
}

+ (id)show:(id)arg1 toVC:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void)onShortVideoTakenFailedToSaveToLibrary:(id)arg1;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)close;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)_onPickerCancel;
- (void)_onPickerSelectedImage:(id)arg1;
- (void)setBlock:(CDUnknownBlockType)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

