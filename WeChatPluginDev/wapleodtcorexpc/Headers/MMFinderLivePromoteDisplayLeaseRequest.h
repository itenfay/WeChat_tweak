//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLivePromoteDisplayLeaseRequest : NSObject
{
    _Bool _dismissCurrentPromotion;
    _Bool _relinquishUponUpcomingPromotion;
    _Bool _userDismissable;
    unsigned long long _priority;
    double _duration;
    id _userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool userDismissable; // @synthesize userDismissable=_userDismissable;
@property(nonatomic) _Bool relinquishUponUpcomingPromotion; // @synthesize relinquishUponUpcomingPromotion=_relinquishUponUpcomingPromotion;
@property(nonatomic) _Bool dismissCurrentPromotion; // @synthesize dismissCurrentPromotion=_dismissCurrentPromotion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

