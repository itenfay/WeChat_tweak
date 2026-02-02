//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveContact, MMFinderLiveTask, NSString;

@interface FinderLiveFollowContact : NSObject
{
    FinderLiveContact *_liveContact;
    unsigned long long _priority;
    NSString *_uniqueKey;
}

+ (id)createFollowContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @synthesize liveContact=_liveContact;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (_Bool)isFromMySelf;
- (_Bool)isFromMyFriend;
- (unsigned long long)getPriority;
- (id)createUniqueKey;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

