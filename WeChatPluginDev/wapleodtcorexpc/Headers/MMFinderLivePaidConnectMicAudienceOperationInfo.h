//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLivePaidConnectMicAudienceOperationInfo : NSObject
{
    _Bool _bidEnabled;
    NSArray *_userList;
    unsigned long long _minBidAmount;
    unsigned long long _waitingCount;
    unsigned long long _bidGap;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bidGap; // @synthesize bidGap=_bidGap;
@property(nonatomic) unsigned long long waitingCount; // @synthesize waitingCount=_waitingCount;
@property(nonatomic) unsigned long long minBidAmount; // @synthesize minBidAmount=_minBidAmount;
@property(nonatomic) _Bool bidEnabled; // @synthesize bidEnabled=_bidEnabled;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;

@end

