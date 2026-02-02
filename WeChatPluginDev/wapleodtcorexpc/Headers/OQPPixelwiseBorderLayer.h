//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CAShapeLayer.h>

@interface OQPPixelwiseBorderLayer : CAShapeLayer
{
    double _uniformEdgeInsetPoints;
}

- (struct CGPath *)borderPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void)layoutSublayers;
- (id)initWithLineWidthPixels:(double)arg1 uniformEdgeInsetPixels:(double)arg2;
- (id)initWithLineWidthPoints:(double)arg1 uniformEdgeInsetPoints:(double)arg2;
- (id)init;

@end

