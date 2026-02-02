//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMapStatusOption : NSObject
{
    _Bool _animated;
    _Bool _byGesture;
    _Bool _triggerRegionChangeDistributor;
    _Bool _triggerDecreaseTrackingMode;
    double _duration;
}

+ (id)mapStatusOptionWithAnimation:(_Bool)arg1 duration:(double)arg2 byGesture:(_Bool)arg3 triggerRegionChange:(_Bool)arg4 triggerDecreaseTrackingMode:(_Bool)arg5;
@property(nonatomic) _Bool triggerDecreaseTrackingMode; // @synthesize triggerDecreaseTrackingMode=_triggerDecreaseTrackingMode;
@property(nonatomic) _Bool triggerRegionChangeDistributor; // @synthesize triggerRegionChangeDistributor=_triggerRegionChangeDistributor;
@property(nonatomic) _Bool byGesture; // @synthesize byGesture=_byGesture;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)init;

@end

