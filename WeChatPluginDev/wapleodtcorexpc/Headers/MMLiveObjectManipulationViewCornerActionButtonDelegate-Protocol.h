//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveObjectManipulationViewCustomCornerAction, MMLiveObjectSingleTouchManipulationGestureRecognizer;

@protocol MMLiveObjectManipulationViewCornerActionButtonDelegate <NSObject>

@optional
- (void)onManipulationViewScaleRotationCornerActionInvokedByGestureRecognizer:(MMLiveObjectSingleTouchManipulationGestureRecognizer *)arg1;
- (void)onManipulationViewCustomCornerActionInvoked:(MMLiveObjectManipulationViewCustomCornerAction *)arg1;
@end

