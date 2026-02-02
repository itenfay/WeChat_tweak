//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface NotifyMsgDB : NSObject
{
    WCTDatabase *_database;
    WCTTable *_notifyMsgTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *notifyMsgTable; // @synthesize notifyMsgTable=_notifyMsgTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (id)getDBPath;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void)cleanTipsIDToMsgIDMapping;
- (void)cleanForbidMapping;
- (void)cleanDBXmlInfo;
- (void)cleanTimeoutMapping;
- (void)deleteNotifyInfoWithTipsID:(id)arg1;
- (id)getAllUnReadLiveEndNotifyInfo;
- (long long)getMsgSvrIDWithTipsID:(id)arg1;
- (void)updateAllToRead;
- (void)updateMainFrameClickedWithTipsID:(id)arg1;
- (_Bool)isMainFrameClicked:(id)arg1;
- (void)updateMainFrameExposedWithTipsID:(id)arg1;
- (_Bool)isMainFrameExposed:(id)arg1;
- (void)updateLiveEndWithTipsID:(id)arg1;
- (_Bool)isForbidWithTipsID:(id)arg1;
- (void)forbidMsgShowWithTipsID:(id)arg1;
- (id)getRequestNotifyList;
- (id)getMessageWrapWithTipID:(id)arg1;
- (id)getXmlInfoWithTipsID:(id)arg1;
- (void)addNotifyWithXmlInfo:(id)arg1;
- (_Bool)createNotifyMsgTable;
- (void)createTables;
- (_Bool)initDataBase;
- (void)dealloc;
- (id)init;

@end

