//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface TXCCameraFocusSquareView : UIView
{
    double _scalingFactor;
}

+ (id)defaultFocusSquareView;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
- (void)updatePoint:(struct CGPoint)arg1;
- (void)setupFocusShapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

