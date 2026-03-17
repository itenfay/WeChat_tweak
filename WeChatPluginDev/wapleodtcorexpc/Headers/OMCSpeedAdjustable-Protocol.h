//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol OMCSpeedAdjustable <NSObject>
@property(readonly, nonatomic) double speedRatio;
- (_Bool)updateSpeedRatio:(double)arg1;
- (void)clearSpeedAdjustment;
- (void)endSpeedAdjustmentSession;
- (void)beginSpeedAdjustmentSession;
@end

