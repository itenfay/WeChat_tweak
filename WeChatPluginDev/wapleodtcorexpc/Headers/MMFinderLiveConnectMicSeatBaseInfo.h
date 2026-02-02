//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveConnectMicSeatBaseInfo : NSObject
{
    _Bool _isInOtherRoom;
    unsigned long long _micIndex;
    NSString *_seatName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInOtherRoom; // @synthesize isInOtherRoom=_isInOtherRoom;
@property(copy, nonatomic) NSString *seatName; // @synthesize seatName=_seatName;
@property(nonatomic) unsigned long long micIndex; // @synthesize micIndex=_micIndex;
- (id)displayedSeatFullName;
- (id)displayedSeatName;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

