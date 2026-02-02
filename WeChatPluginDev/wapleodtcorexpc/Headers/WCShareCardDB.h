//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase, WCTTable;

@interface WCShareCardDB
{
    WCTDatabase *m_db;
    WCTTable *m_tableShareCardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_tableShareCardInfo; // @synthesize m_tableShareCardInfo;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (_Bool)initDB;
- (_Bool)getWCShareCardByCardTPID:(id)arg1 andShareCardList:(id)arg2;
- (id)getWCShareCardByCardID:(id)arg1;
- (unsigned int)getNoramlShareCardCount:(id)arg1;
- (void)deleteUselessShareCard;
- (_Bool)deleteWCShareCardByCardID:(id)arg1;
- (_Bool)insertOrUpdateShareCardData:(id)arg1;
- (_Bool)insertOrUpdateShareCardBySyncItem:(id)arg1;
- (unsigned int)getValidShareCardCountByTpId:(id)arg1;
- (_Bool)getNeedBatchGetWCShareCardIdList:(id)arg1 byMinUpdateTime:(unsigned int)arg2;
- (_Bool)getFirstPageNeedBatchGetWCShareCardIdList:(id)arg1;
- (unsigned int)getShareCardAvailableCount;
- (unsigned int)getShareCardCount;

@end

