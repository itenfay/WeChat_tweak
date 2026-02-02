//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMotionManager, UIImage, UIImageView, UIScrollView;

@interface WCPanoramaImageView
{
    _Bool _shouldStartMonitoring;
    UIImage *_image;
    CMMotionManager *_motionManager;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    double _motionRate;
    long long _minimumXOffset;
    long long _maximumXOffset;
    struct CGRect _viewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldStartMonitoring; // @synthesize shouldStartMonitoring=_shouldStartMonitoring;
@property(nonatomic) long long maximumXOffset; // @synthesize maximumXOffset=_maximumXOffset;
@property(nonatomic) long long minimumXOffset; // @synthesize minimumXOffset=_minimumXOffset;
@property(nonatomic) double motionRate; // @synthesize motionRate=_motionRate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)doStartMonitor;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetViewFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

