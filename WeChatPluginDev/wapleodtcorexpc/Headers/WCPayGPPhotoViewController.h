//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageScrollView, NSString, UIImage, UIImageView, UIView;
@protocol WCPayGPPhotoViewControllerDelegate;

@interface WCPayGPPhotoViewController
{
    id <WCPayGPPhotoViewControllerDelegate> _delegate;
    UIImage *_originImage;
    ImageScrollView *_imageView;
    UIImageView *_animateImageView;
    UIView *_maskView;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) ImageScrollView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(nonatomic) __weak id <WCPayGPPhotoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFullScreenItemDragToClose;
- (void)OnLongPress:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onSingleTap:(id)arg1;
- (void)dismissPhotoViewWithAnimation;
- (void)dismissPhotoView;
- (void)animateShowImage;
- (void)setupView;
- (void)viewDidLoad;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (id)initWithDelegate:(id)arg1 image:(id)arg2 originRect:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

