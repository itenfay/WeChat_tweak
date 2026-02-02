//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, UIImage, UIImageView;

@interface ScanCardBackgroundViewV2 : UIView
{
    struct CGRect maskRect;
    UIImage *_leftTopImage;
    UIImage *_rightTopImage;
    UIImage *_leftBottomImage;
    UIImage *_rightBottomImage;
    double _lengthWidthRatio;
    UIImageView *_scanLineView;
    CAAnimationGroup *_scanLineAnimation;
    double _scanLineTop;
    double _scanLineBottom;
}

- (void).cxx_destruct;
@property(nonatomic) double scanLineBottom; // @synthesize scanLineBottom=_scanLineBottom;
@property(nonatomic) double scanLineTop; // @synthesize scanLineTop=_scanLineTop;
@property(retain, nonatomic) CAAnimationGroup *scanLineAnimation; // @synthesize scanLineAnimation=_scanLineAnimation;
@property(retain, nonatomic) UIImageView *scanLineView; // @synthesize scanLineView=_scanLineView;
- (void)stopScanLineAnimation;
- (void)startScanLineAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupScanLineView;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 andTypeRatio:(double)arg2;

@end

