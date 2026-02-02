//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class GKImageCropView, UIButton, UIImage, UIToolbar;
@protocol GKImageCropControllerDelegate;

@interface GKImageCropViewController : UIViewController
{
    UIImage *_croppedImage;
    _Bool resizeableCropArea;
    UIImage *sourceImage;
    id <GKImageCropControllerDelegate> delegate;
    GKImageCropView *imageCropView;
    UIToolbar *toolbar;
    UIButton *cancelButton;
    UIButton *useButton;
    struct CGSize cropSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool resizeableCropArea; // @synthesize resizeableCropArea;
@property(retain, nonatomic) UIButton *useButton; // @synthesize useButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar;
@property(retain, nonatomic) GKImageCropView *imageCropView; // @synthesize imageCropView;
@property(nonatomic) __weak id <GKImageCropControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)_setupToolbar;
- (id)_toolbarBackgroundImage;
- (void)_setupUseButton;
- (void)_setupCancelButton;
- (void)_setupCropView;
- (void)_setupNavigationBar;
- (void)_actionUse;
- (void)_actionCancel;

@end

