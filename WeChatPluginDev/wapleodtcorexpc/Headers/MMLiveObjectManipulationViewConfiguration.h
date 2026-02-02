//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;
@protocol MMLiveObjectManipulationViewCornerAction;

@interface MMLiveObjectManipulationViewConfiguration : NSObject
{
    _Bool _cancelOutOfBoundManipulations;
    _Bool _enableTap;
    _Bool _enableRotation;
    _Bool _enableScaling;
    double _minimumScale;
    double _maximumScale;
    double _cardinalRotationSnapAngle;
    double _minimumHitAreaRatioRelativeToParent;
    double _minimumBorderDimensionRatioRelativeToParent;
    double _borderOutset;
    double _borderWidth;
    UIColor *_borderColor;
    double _borderCornerRadius;
    id <MMLiveObjectManipulationViewCornerAction> _topLeftCornerAction;
    id <MMLiveObjectManipulationViewCornerAction> _topRightCornerAction;
    id <MMLiveObjectManipulationViewCornerAction> _bottomLeftCornerAction;
    id <MMLiveObjectManipulationViewCornerAction> _bottomRightCornerAction;
    id <MMLiveObjectManipulationViewCornerAction> _topLeftCornerActionInAccessibilityMode;
    id <MMLiveObjectManipulationViewCornerAction> _topRightCornerActionInAccessibilityMode;
    id <MMLiveObjectManipulationViewCornerAction> _bottomLeftCornerActionInAccessibilityMode;
    id <MMLiveObjectManipulationViewCornerAction> _bottomRightCornerActionInAccessibilityMode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> bottomRightCornerActionInAccessibilityMode; // @synthesize bottomRightCornerActionInAccessibilityMode=_bottomRightCornerActionInAccessibilityMode;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> bottomLeftCornerActionInAccessibilityMode; // @synthesize bottomLeftCornerActionInAccessibilityMode=_bottomLeftCornerActionInAccessibilityMode;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> topRightCornerActionInAccessibilityMode; // @synthesize topRightCornerActionInAccessibilityMode=_topRightCornerActionInAccessibilityMode;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> topLeftCornerActionInAccessibilityMode; // @synthesize topLeftCornerActionInAccessibilityMode=_topLeftCornerActionInAccessibilityMode;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> bottomRightCornerAction; // @synthesize bottomRightCornerAction=_bottomRightCornerAction;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> bottomLeftCornerAction; // @synthesize bottomLeftCornerAction=_bottomLeftCornerAction;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> topRightCornerAction; // @synthesize topRightCornerAction=_topRightCornerAction;
@property(retain, nonatomic) id <MMLiveObjectManipulationViewCornerAction> topLeftCornerAction; // @synthesize topLeftCornerAction=_topLeftCornerAction;
@property(nonatomic) _Bool enableScaling; // @synthesize enableScaling=_enableScaling;
@property(nonatomic) _Bool enableRotation; // @synthesize enableRotation=_enableRotation;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double borderOutset; // @synthesize borderOutset=_borderOutset;
@property(nonatomic) double minimumBorderDimensionRatioRelativeToParent; // @synthesize minimumBorderDimensionRatioRelativeToParent=_minimumBorderDimensionRatioRelativeToParent;
@property(nonatomic) double minimumHitAreaRatioRelativeToParent; // @synthesize minimumHitAreaRatioRelativeToParent=_minimumHitAreaRatioRelativeToParent;
@property(nonatomic) double cardinalRotationSnapAngle; // @synthesize cardinalRotationSnapAngle=_cardinalRotationSnapAngle;
@property(nonatomic) _Bool enableTap; // @synthesize enableTap=_enableTap;
@property(nonatomic) _Bool cancelOutOfBoundManipulations; // @synthesize cancelOutOfBoundManipulations=_cancelOutOfBoundManipulations;
@property(nonatomic) double maximumScale; // @synthesize maximumScale=_maximumScale;
@property(nonatomic) double minimumScale; // @synthesize minimumScale=_minimumScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

