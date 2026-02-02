//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeListInfo, NSString;

@interface WCFinderMembershipVisitorMemberInfo : NSObject
{
    NSString *_finderMemberTicket;
    FinderLiveNoticeListInfo *_liveNoticeListInfo;
    unsigned long long _unreadFeedNum;
    unsigned long long _unreadLiveNum;
    unsigned long long _unreadDynamicNum;
    unsigned long long _totalFeedNum;
    unsigned long long _totalLiveNum;
    unsigned long long _totalDynamicNum;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_liveNoticeListInfo;
+ (void)PBArrayAdd_finderMemberTicket;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalDynamicNum; // @synthesize totalDynamicNum=_totalDynamicNum;
@property(nonatomic) unsigned long long totalLiveNum; // @synthesize totalLiveNum=_totalLiveNum;
@property(nonatomic) unsigned long long totalFeedNum; // @synthesize totalFeedNum=_totalFeedNum;
@property(nonatomic) unsigned long long unreadDynamicNum; // @synthesize unreadDynamicNum=_unreadDynamicNum;
@property(nonatomic) unsigned long long unreadLiveNum; // @synthesize unreadLiveNum=_unreadLiveNum;
@property(nonatomic) unsigned long long unreadFeedNum; // @synthesize unreadFeedNum=_unreadFeedNum;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @synthesize liveNoticeListInfo=_liveNoticeListInfo;
@property(copy, nonatomic) NSString *finderMemberTicket; // @synthesize finderMemberTicket=_finderMemberTicket;
- (id)initWithVisitorMemberInfo:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

