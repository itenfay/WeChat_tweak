//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveGiftGoalItem : NSObject
{
    unsigned long long _type;
    NSString *_giftId;
    unsigned long long _targetCount;
    unsigned long long _currentCount;
    unsigned long long _stagingUnixEpochTimeInSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long stagingUnixEpochTimeInSeconds; // @synthesize stagingUnixEpochTimeInSeconds=_stagingUnixEpochTimeInSeconds;
@property(nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) unsigned long long targetCount; // @synthesize targetCount=_targetCount;
@property(retain, nonatomic) NSString *giftId; // @synthesize giftId=_giftId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

