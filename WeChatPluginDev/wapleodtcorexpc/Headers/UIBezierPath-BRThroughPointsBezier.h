//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIBezierPath.h>

@interface UIBezierPath (BRThroughPointsBezier)
+ (void)addArrowToBezierPath:(id)arg1 arrowWidth:(double)arg2;
+ (id)generateBubblePathInRect:(struct CGRect)arg1 cornerRadius:(double)arg2 arrowDirection:(long long)arg3 arrowWidth:(double)arg4 arrowHeight:(double)arg5 arrowX:(double)arg6;
@property(nonatomic) double contractionFactor;
@property(nonatomic) double clipPathEndAngle; // @dynamic clipPathEndAngle;
@property(nonatomic) double clipPathStartAngle; // @dynamic clipPathStartAngle;
@property(nonatomic) _Bool isRoundPath; // @dynamic isRoundPath;
@end

