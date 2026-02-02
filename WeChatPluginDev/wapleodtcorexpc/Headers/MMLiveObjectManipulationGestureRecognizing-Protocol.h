//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMLiveObjectManipulationGestureRecognizing <NSObject>
@property(readonly, nonatomic) struct CGPoint currentTouchPosition;
@property(readonly, nonatomic) struct CGAffineTransform transformAtGesetureBeginning;
@property(readonly, nonatomic) struct CGAffineTransformComponents transformComponentsAtGesetureBeginning;
@property(readonly, nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) struct CGAffineTransformComponents transformComponents;
- (void)overrideCurrentTransformComponents:(struct CGAffineTransformComponents)arg1;
@end

