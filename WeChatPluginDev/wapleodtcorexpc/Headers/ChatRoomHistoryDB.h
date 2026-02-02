//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface ChatRoomHistoryDB : NSObject
{
    WCTDatabase *_database;
    WCTTable *_processTagTable;
    WCTTable *_historyMsgTable;
    WCTTable *_processingMsgTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *processingMsgTable; // @synthesize processingMsgTable=_processingMsgTable;
@property(retain, nonatomic) WCTTable *historyMsgTable; // @synthesize historyMsgTable=_historyMsgTable;
@property(retain, nonatomic) WCTTable *processTagTable; // @synthesize processTagTable=_processTagTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (id)getAllHistoryMsgWithHistoryID:(unsigned long long)arg1;
- (id)getHistoryMsgWithMsgWrap:(id)arg1;
- (void)deleteAllHistoryObjWithHistoryID:(unsigned long long)arg1;
- (void)deleteAllHistroyMsgWithChatName:(id)arg1;
- (void)deleteHistroyMsg:(id)arg1;
- (_Bool)addHistoryMsgObjs:(id)arg1 historyInfo:(id)arg2;
- (_Bool)createHistoryMsgTable;
- (id)getAllProcessingInvitedMsgWrap;
- (void)deleteAllProcessingMsgWithChatName:(id)arg1;
- (void)deleteProcessingInvitedMsgWrap:(id)arg1;
- (_Bool)isMsgProcessing:(id)arg1;
- (_Bool)addProcessingInviteMsg:(id)arg1;
- (_Bool)createProcessingMsgTable;
- (void)deleteProcessTag:(unsigned long long)arg1;
- (void)deleteAllProcessTag:(id)arg1;
- (_Bool)isHistoryHaveProcessTag:(unsigned long long)arg1;
- (_Bool)addProcessTagWithHistoryID:(unsigned long long)arg1 chatName:(id)arg2;
- (_Bool)createProcessTagTable;
- (void)createTables;
- (_Bool)reloadDataBase;
- (id)init;

@end

