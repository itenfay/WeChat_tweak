//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveNoticeListInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)mergeNoticeInfoListByTime:(id)arg1 withNoticeInfoList:(id)arg2;
+ (id)collectFirstNoticeInfoToListFromNoticeList:(id)arg1;
+ (id)getMemberNoticeListInfoFromNoticeList:(id)arg1;
+ (id)getNormalNoticeListInfoFromNoticeList:(id)arg1;
- (id)archivedWCTValue;
- (id)actualLastNoticeInfo;
- (id)actualFirstNoticeInfo;
- (id)noticeInfoForNoticeId:(id)arg1;
- (id)noticeListByRemovingNoticeInfo:(id)arg1;
- (_Bool)updateNoticeId:(id)arg1 withReserveStatus:(unsigned long long)arg2;
- (void)updateAllNoticeInfosWithReservedNoticeIDs:(id)arg1 unreservedNoticeIDs:(id)arg2;
- (void)updateAllNoticeInfosWithReserveStatus:(unsigned long long)arg1 excludedNoticeIDs:(id)arg2 aggregateTypeArray:(id)arg3;
- (void)updateAllNoticeInfosWithReserveStatus:(unsigned long long)arg1;
- (void)removeNoticeInfo:(id)arg1;
- (_Bool)prependPreviousNoticeList:(id)arg1 insertedIndexes:(id *)arg2;
- (_Bool)appendNextNoticeList:(id)arg1 insertedIndexes:(id *)arg2;

// Remaining properties
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int continueFlagReverse; // @dynamic continueFlagReverse;
@property(nonatomic) unsigned int noticeAggregateType; // @dynamic noticeAggregateType;
@property(retain, nonatomic) NSMutableArray *noticeInfo; // @dynamic noticeInfo;
@property(retain, nonatomic) NSString *targetNoticeId; // @dynamic targetNoticeId;
@property(nonatomic) unsigned int totalNoticeCnt; // @dynamic totalNoticeCnt;
@property(nonatomic) unsigned int totalReservedCnt; // @dynamic totalReservedCnt;

@end

