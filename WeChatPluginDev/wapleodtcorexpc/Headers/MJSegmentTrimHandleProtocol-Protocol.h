//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIPanGestureRecognizer;

@protocol MJSegmentTrimHandleProtocol <NSObject>
@property(nonatomic) _Bool isRightExpandable;
@property(nonatomic) _Bool isLeftExpandable;
@property(nonatomic) struct UIEdgeInsets rightHitInsets;
@property(nonatomic) struct UIEdgeInsets leftHitInsets;
@property(nonatomic) struct UIEdgeInsets trimHandleViewInsets;
- (unsigned long long)trimmingEdgeForPanGesture:(UIPanGestureRecognizer *)arg1;
- (_Bool)respondsToPanGesture:(UIPanGestureRecognizer *)arg1;

@optional
- (void)hideSnapIndicatorDot;
- (void)showSnapIndicatorDotWithEdge:(unsigned long long)arg1;
- (void)hideSnapIndicatorLine;
- (void)showSnapIndicatorLineWithEdge:(unsigned long long)arg1;
@end

