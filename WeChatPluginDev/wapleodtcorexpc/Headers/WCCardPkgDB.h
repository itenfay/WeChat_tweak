//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface WCCardPkgDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableCardInfo;
    WCTTable *m_tableMsgCenter;
    WCTTable *m_tableOfflineCode;
    WCTTable *m_tableOfflineCodeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_tableOfflineCodeInfo; // @synthesize m_tableOfflineCodeInfo;
@property(retain, nonatomic) WCTTable *m_tableOfflineCode; // @synthesize m_tableOfflineCode;
@property(retain, nonatomic) WCTTable *m_tableMsgCenter; // @synthesize m_tableMsgCenter;
@property(retain, nonatomic) WCTTable *m_tableCardInfo; // @synthesize m_tableCardInfo;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (void)fixBugForStateFlagInCardInfoTable;
- (void)saveDatabaseVersion:(unsigned int)arg1;
- (unsigned int)getDatabaseVersion;
- (id)pathForDatabaseVersion;
- (void)CloseDB;
- (void)FixDatabaseBug;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (_Bool)initDB;
- (void)reloadDataBase;
- (void)updateStateFlagWithLoacalId:(id)arg1;
- (id)getAllWCCard;
- (id)getWCCardByCardID:(id)arg1;
- (id)getDynamicCards;
- (unsigned int)getDynamicCardCount;
- (id)getAllAvailableCards;
- (unsigned int)getAvailableWCCardCount;
- (unsigned int)getWCCardCount;
- (_Bool)getNeedBatchGetWCCardIdInfoList:(id)arg1 byMinUpdateTime:(unsigned int)arg2;
- (_Bool)getNextPageNeedBatchGetWCCardIdInfoList:(id)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (_Bool)getFirstPageNeedBatchGetWCCardIdInfoList:(id)arg1;
- (_Bool)getNextPageWCCardList:(id)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (_Bool)getFirstPageWCCardList:(id)arg1;
- (_Bool)deleteWCCardByLocalCardID:(unsigned int)arg1;
- (_Bool)deleteWCCardByCardID:(id)arg1;
- (_Bool)insertOrUpdateWCCard:(id)arg1;
- (_Bool)insertOrUpdateWCCardByAddCardItem:(id)arg1;
- (_Bool)setConsumedMsgRead:(id)arg1;
- (_Bool)cleanAllMsg;
- (_Bool)setAllMsgRead;
- (id)getLastMsg;
- (unsigned int)insertWCCardPkgMsg:(id)arg1 XML:(id)arg2;
- (_Bool)deleteWCCardMsgByLocalMsgID:(unsigned int)arg1;
- (id)getNextPageMsgListByCurMinUpdateTime:(unsigned int)arg1 HasSmaller:(_Bool *)arg2;
- (id)getFirstPageMsgList;
- (id)getUnreadMsgList;
- (unsigned int)getUnreadMessageCount;
- (unsigned int)getMessageCount;
- (unsigned int)getUnshowCodeCountByCardId:(id)arg1;
- (_Bool)deleteCodesByCardId:(id)arg1;
- (_Bool)deleteShowingCodeByCardId:(id)arg1;
- (_Bool)deleteCodeByQrCardIdAndCodeId:(id)arg1 qrCodeId:(id)arg2;
- (_Bool)updateCodeStatus:(id)arg1;
- (id)getUnShowQrCodesByCardId:(id)arg1;
- (id)getQrCodeByCardId:(id)arg1;
- (id)getShowingQrcodeByCardId:(id)arg1;
- (_Bool)insertOrUpdateOfflineCodeItem:(id)arg1;
- (_Bool)deleteAllCodeConfig;
- (id)getQrCodeConfigByCardId:(id)arg1;
- (_Bool)insertOrUpdateCodeConfigItem:(id)arg1;

@end

