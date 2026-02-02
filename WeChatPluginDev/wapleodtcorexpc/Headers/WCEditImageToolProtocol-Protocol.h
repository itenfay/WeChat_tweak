//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CALayer, CAShapeLayer, UIColor, UIView;

@protocol WCEditImageToolProtocol <NSObject>
@property(nonatomic) double lineWidth;
@property(retain, nonatomic) UIColor *lineColor;
- (void)drawLayer;

@optional
- (CAShapeLayer *)getCurrentShapeLayer;
- (struct CGRect)addPathWithP2Point:(struct CGPoint)arg1 withP1Point:(struct CGPoint)arg2 withCPoint:(struct CGPoint)arg3;
- (void)setInitialPoint:(struct CGPoint)arg1;
- (UIView *)createView:(struct CGRect)arg1;
- (CALayer *)createLayer:(struct CGRect)arg1;
@end

