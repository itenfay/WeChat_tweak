//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyWCDB, NSString, WCFacade;

@interface WCTogetherManager : NSObject
{
    NSString *_username;
    WCFacade *_referredFacade;
    MyWCDB *_database;
}

+ (void)initialize;
+ (void)_setJoinedTogether:(_Bool)arg1;
+ (_Bool)_joinedTogether;
+ (void)_setShowsBadgeInHistoryEntrance:(_Bool)arg1;
+ (_Bool)_showsBadgeInHistoryEntrance;
+ (void)_setShowsBadgeInPostPage:(_Bool)arg1;
+ (_Bool)_showsBadgeInPostPage;
+ (void)_setHadShownTogetherHistoryEntrance:(_Bool)arg1 forUsername:(id)arg2;
+ (_Bool)_hadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (void)setJoinedTogether:(_Bool)arg1;
+ (_Bool)joinedTogether;
+ (void)setShowsBadgeInHistoryEntrance:(_Bool)arg1;
+ (_Bool)showsBadgeInHistoryEntrance;
+ (_Bool)hadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (void)markHadShownTogetherHistoryEntranceForUsername:(id)arg1;
+ (_Bool)showsTogetherHistoryEntranceForUsername:(id)arg1;
+ (_Bool)canShowTogetherHistoryEntrance;
+ (void)setShowsBadgeInPostPage:(_Bool)arg1;
+ (_Bool)showsBadgeInPostPage;
+ (_Bool)canShowBadgeInPostPage;
+ (_Bool)togetherPostEnabled;
+ (void)_initializeForConfigurations;
- (void).cxx_destruct;
@property(retain, nonatomic) MyWCDB *database; // @synthesize database=_database;
@property(nonatomic) __weak WCFacade *referredFacade; // @synthesize referredFacade=_referredFacade;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)deleteAllCachedDataItems;
- (_Bool)updateCachedDataItems:(id)arg1;
- (id)getCachedDataItemsWithMaxCount:(unsigned long long)arg1;
- (id)initWithUsername:(id)arg1;

@end

