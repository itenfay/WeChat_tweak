//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveObjectManipulationView;

@protocol MMLiveObjectManipulationViewDelegate <NSObject>

@optional
- (void)onManipulationViewTapped:(MMLiveObjectManipulationView *)arg1;
- (void)onManipulationWillCancelOnView:(MMLiveObjectManipulationView *)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 localTouchPosition:(struct CGPoint)arg3;
- (void)onManipulationWillEndOnView:(MMLiveObjectManipulationView *)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 toTransformComponents:(struct CGAffineTransformComponents)arg3 localTouchPosition:(struct CGPoint)arg4 overrideTransformComponents:(struct CGAffineTransformComponents *)arg5;
- (void)onManipulationWillChangeOnView:(MMLiveObjectManipulationView *)arg1 fromTransformComponents:(struct CGAffineTransformComponents)arg2 toTransformComponents:(struct CGAffineTransformComponents)arg3 localTouchPosition:(struct CGPoint)arg4 overrideTransformComponents:(struct CGAffineTransformComponents *)arg5;
- (void)onManipulationWillBeginOnView:(MMLiveObjectManipulationView *)arg1 localTouchPosition:(struct CGPoint)arg2;
@end

