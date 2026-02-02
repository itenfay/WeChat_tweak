//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WCSVGStyledPathFactoryDelegate;

@interface WCSVGStyledPathFactory : NSObject
{
    id <WCSVGStyledPathFactoryDelegate> _delegate;
    NSMutableArray *_gradients;
    NSMutableArray *_affineTransformStack;
    NSMutableArray *_groupAppearanceStack;
    struct CGPoint _previousCurveOperationControlPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *groupAppearanceStack; // @synthesize groupAppearanceStack=_groupAppearanceStack;
@property(retain, nonatomic) NSMutableArray *affineTransformStack; // @synthesize affineTransformStack=_affineTransformStack;
@property struct CGPoint previousCurveOperationControlPoint; // @synthesize previousCurveOperationControlPoint=_previousCurveOperationControlPoint;
@property(retain, nonatomic) NSMutableArray *gradients; // @synthesize gradients=_gradients;
@property(nonatomic) __weak id <WCSVGStyledPathFactoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)popGroupAppearance;
- (void)pushGroupAppearanceWithAttributes:(id)arg1;
- (void)popGroupTransform;
- (void)pushGroupTransformWithAttributes:(id)arg1;
- (void)addEllipticalArcToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addSmoothQuadCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addQuadCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addSmoothCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addCurveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addVerticalLineToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addHorizontalLineToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addLineToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (void)addMoveToPointFromCommandScanner:(id)arg1 toPath:(id)arg2;
- (id)bezierPathFromCommandList:(id)arg1;
- (id)commandListForPolylineString:(id)arg1;
- (id)commandListForCommandString:(id)arg1;
- (id)attributesByApplyingStyleAttributeToAttributes:(id)arg1;
- (id)attributesByAddingGroupAttributesToAttributes:(id)arg1;
- (id)applyStrokeAttributes:(id)arg1 toPath:(id)arg2;
- (id)createStyledPath:(id)arg1 withAttributes:(id)arg2;
- (id)pathWithAttributes:(id)arg1;
- (id)polyWithAttributes:(id)arg1 closed:(_Bool)arg2;
- (id)circleWithAttributes:(id)arg1;
- (id)ellipseWithAttributes:(id)arg1;
- (id)rectWithAttributes:(id)arg1;
- (id)lineWithAttributes:(id)arg1;
- (struct CGRect)getViewboxFromAttributes:(id)arg1;
- (id)styledPathFromElementName:(id)arg1 attributes:(id)arg2;
- (id)init;

@end

