//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUserPageResponse, MMTimer, NSString;

@interface NewLifeProfilePrefetchLogic : NSObject
{
    _Bool _active;
    unsigned int _checkInterval;
    unsigned int _prefetchValidDuration;
    unsigned int _mostRecentPrefetchTime;
    NSString *_finderUsername;
    FinderUserPageResponse *_response;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned int mostRecentPrefetchTime; // @synthesize mostRecentPrefetchTime=_mostRecentPrefetchTime;
@property(retain, nonatomic) FinderUserPageResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned int prefetchValidDuration; // @synthesize prefetchValidDuration=_prefetchValidDuration;
@property(nonatomic) unsigned int checkInterval; // @synthesize checkInterval=_checkInterval;
- (void)markPrefetchedResponseAsExpired;
- (id)prefetchedResponse;
- (void)resetTimer;
- (void)checkPrefetch;
- (void)pausePrefetch;
- (void)startOrResumePrefetch;
- (_Bool)isPrefetchEnabled;
- (unsigned int)usedPrefetchValidDuration;
- (unsigned int)usedCheckInterval;
- (void)updateFinderUsername:(id)arg1;
- (void)updateCheckInterval:(unsigned int)arg1 prefetchValidDuration:(unsigned int)arg2;
- (id)init;

@end

