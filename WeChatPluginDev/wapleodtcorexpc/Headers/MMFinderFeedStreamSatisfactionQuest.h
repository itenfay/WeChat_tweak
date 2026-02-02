//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderFeedStreamSatisfactionQuest : NSObject
{
    _Bool _isFetching;
    _Bool _fetchSuccess;
    NSArray *_quests;
    NSArray *_reasons;
}

+ (id)fetching;
+ (id)failure;
+ (id)successWithQuest:(id)arg1 reasons:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) NSArray *quests; // @synthesize quests=_quests;
@property(nonatomic) _Bool fetchSuccess; // @synthesize fetchSuccess=_fetchSuccess;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;

@end

