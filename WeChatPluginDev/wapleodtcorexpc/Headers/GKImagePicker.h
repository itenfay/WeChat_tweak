//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImagePickerController;
@protocol GKImagePickerDelegate;

@interface GKImagePicker : NSObject
{
    _Bool resizeableCropArea;
    id <GKImagePickerDelegate> delegate;
    UIImagePickerController *_imagePickerController;
    struct CGSize cropSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) _Bool resizeableCropArea; // @synthesize resizeableCropArea;
@property(nonatomic) __weak id <GKImagePickerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize;
- (void)imageCropController:(id)arg1 didFinishWithCroppedImage:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)_hideController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

