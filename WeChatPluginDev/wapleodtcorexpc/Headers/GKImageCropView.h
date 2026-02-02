//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GKImageCropOverlayView, NSString, UIImage, UIImageView, UIScrollView;

@interface GKImageCropView : UIView
{
    _Bool resizableCropArea;
    UIScrollView *scrollView;
    UIImageView *imageView;
    GKImageCropOverlayView *cropOverlayView;
    double xOffset;
    double yOffset;
    double _faktoredWidth;
    double _faktoredHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double faktoredHeight; // @synthesize faktoredHeight=_faktoredHeight;
@property(nonatomic) double faktoredWidth; // @synthesize faktoredWidth=_faktoredWidth;
@property(nonatomic) double yOffset; // @synthesize yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset;
@property(nonatomic) _Bool resizableCropArea; // @synthesize resizableCropArea;
@property(retain, nonatomic) GKImageCropOverlayView *cropOverlayView; // @synthesize cropOverlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGAffineTransform)_orientationTransformedRectOfImage:(id)arg1;
- (struct CGRect)_calcVisibleRectForCropArea;
- (struct CGRect)_calcVisibleRectForResizeableCropArea;
- (id)croppedImage;
@property(nonatomic) struct CGSize cropSize;
@property(retain, nonatomic) UIImage *imageToCrop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

