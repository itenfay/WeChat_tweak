//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MMMessageAssetIDMgr
{
    WCTDatabase *_database;
    WCTTable *_table;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (void)OnMsgSendSuccess:(id)arg1;
- (id)getDBPath;
- (void)deleteItemsWithChatName:(id)arg1;
- (void)deleteItemWithMessageSvrID:(long long)arg1;
- (id)assetIDForMessageSvrID:(long long)arg1;
- (void)setMessageSvrID:(long long)arg1 chatName:(id)arg2 forAssetID:(id)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

