//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVCaptureVideoPreviewLayer, CALayer, UIImageView, UIView;

@interface FaceRecogRoundView
{
    _Bool _showFacePositionBox;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIImageView *_facePositionBox;
    CALayer *_shapeLayer;
    UIView *_previewView;
    UIView *_blurBkView;
    UIImageView *_blurView;
    struct CGRect _faceRoundFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *blurBkView; // @synthesize blurBkView=_blurBkView;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) CALayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UIImageView *facePositionBox; // @synthesize facePositionBox=_facePositionBox;
@property(nonatomic) __weak AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) _Bool showFacePositionBox; // @synthesize showFacePositionBox=_showFacePositionBox;
@property(nonatomic) struct CGRect faceRoundFrame; // @synthesize faceRoundFrame=_faceRoundFrame;
- (void)resetView;
- (void)showLoading:(_Bool)arg1 image:(id)arg2 scale:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)attachPreviewLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 FaceFrame:(struct CGRect)arg2;

@end

