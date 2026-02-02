//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MyWCDB, WCDataItem;
@protocol WCNotificationCenterMgrDelegate;

@interface WCNotificationCenterMgr
{
    WCDataItem *m_lastDataItem;
    MyWCDB *m_database;
    int m_unReadCount;
    id <WCNotificationCenterMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCNotificationCenterMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MyWCDB *m_database; // @synthesize m_database;
- (void)rptReceSnsRedDot:(id)arg1;
- (void)deleteMessageByFeedId:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)deleteAllMessages;
- (void)markMessageAllReadBeginWithMessage:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (void)markMessageRead:(id)arg1;
- (_Bool)addNewRawMessage:(id)arg1 hasRead:(_Bool)arg2;
- (id)getMessageFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getAllMessages;
- (id)getUnReadMessagesLimit:(int)arg1;
- (id)getUnReadMessages;
- (id)getLatestReadMessage;
- (id)getLastUnReadMessage;
- (unsigned int)getUnReadMessageCount;
- (id)getLastWCObject;
- (void)NotifyCmd:(id)arg1;
- (void)NotifyCheckSelector;
- (void)saveSetting;
- (void)dealloc;
- (id)init;

@end

