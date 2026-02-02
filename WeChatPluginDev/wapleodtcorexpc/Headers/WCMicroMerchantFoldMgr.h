//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyWCDB, NSArray, NSMutableArray, NSMutableDictionary, WCMicroMerchantFoldSettings;
@protocol OS_dispatch_queue;

@interface WCMicroMerchantFoldMgr : NSObject
{
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_queue> *_reportSerialQueue;
    MyWCDB *_database;
    WCMicroMerchantFoldSettings *_foldSettings;
    NSMutableDictionary *_unfoldedUsernameInfos;
    NSArray *_continueUnfoldInteractionTypes;
    NSMutableArray *_reportInfoArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *reportInfoArr; // @synthesize reportInfoArr=_reportInfoArr;
@property(retain, nonatomic) NSArray *continueUnfoldInteractionTypes; // @synthesize continueUnfoldInteractionTypes=_continueUnfoldInteractionTypes;
@property(retain, nonatomic) NSMutableDictionary *unfoldedUsernameInfos; // @synthesize unfoldedUsernameInfos=_unfoldedUsernameInfos;
@property(retain, nonatomic) WCMicroMerchantFoldSettings *foldSettings; // @synthesize foldSettings=_foldSettings;
@property(retain, nonatomic) MyWCDB *database; // @synthesize database=_database;
- (void)handleTimeLineSessionStart;
- (void)onTimeLineSessionStart;
- (id)hitRuleInteractions:(id)arg1 usernames:(id)arg2 threshold:(unsigned long long)arg3;
- (void)asyncReportWithFoldAgainUsernames:(id)arg1;
- (void)asyncReportHitRuleInteractions:(id)arg1 openWSGroupInteractions:(id)arg2 openWSUsernames:(id)arg3 threshold:(unsigned long long)arg4;
- (void)asyncSaveUnfoldedUsernameInfos;
- (void)saveUnfoldedUsernameInfos;
- (void)loadUnfoldedUsernameInfos;
- (_Bool)_UnfoldingFeeds_hasUnfoldInteractionWithUsername:(id)arg1 minTime:(unsigned long long)arg2 maxTime:(unsigned long long)arg3;
- (void)_UnfoldingFeeds_updateUnfoldedUsernameInfosAtTime:(unsigned long long)arg1 expiredUsernames:(id *)arg2;
- (void)_FoldingFeeds_updateUnfoldedUsernameInfosAtTime:(unsigned long long)arg1 expiredUsernames:(id *)arg2;
- (id)fetchUnfoldedUsernamesAtTime:(id)arg1 expiredFoldedUsernames:(id *)arg2 expiredUnfoldedUsernames:(id *)arg3;
- (_Bool)clearAllInteractionRecords;
- (void)asyncRegenerateFoldSettings;
- (void)asyncRecordInteractionWithDataItem:(id)arg1 interactionType:(unsigned long long)arg2 isFolded:(_Bool)arg3 atTime:(id)arg4 scene:(unsigned long long)arg5;
- (void)resetMicroMerchantDynamicUnfoldDataIfNeeded;
- (id)init;

@end

