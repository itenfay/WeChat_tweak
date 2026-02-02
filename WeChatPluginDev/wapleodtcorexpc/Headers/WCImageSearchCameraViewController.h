//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;
@protocol _TtP6WeChat41WCImageSearchCameraViewControllerDelegate_;

@interface WCImageSearchCameraViewController
{
    MISSING_TYPE *searchDelegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2;
- (id)toolbarBtnOrder;
- (void)showImagePicker;
- (void)closeAfterDone;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak id <_TtP6WeChat41WCImageSearchCameraViewControllerDelegate_> searchDelegate; // @synthesize searchDelegate;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;

@end

