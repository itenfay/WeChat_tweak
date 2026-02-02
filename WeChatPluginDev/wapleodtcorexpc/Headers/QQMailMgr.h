//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, XMailSearchMailAddrLogic, XMailUploadAttachmentLogic;

@interface QQMailMgr
{
    _Bool m_bSyncingContact;
    unsigned int m_uiSyncCount;
    NSMutableDictionary *m_dicCookie;
    int mailUnreadCount;
    XMailSearchMailAddrLogic *_searchMailAddrLogic;
    XMailUploadAttachmentLogic *_uploadAttachMentLogic;
}

+ (_Bool)isXmailVerified;
+ (_Bool)canBindXmail;
- (void).cxx_destruct;
@property(retain, nonatomic) XMailUploadAttachmentLogic *uploadAttachMentLogic; // @synthesize uploadAttachMentLogic=_uploadAttachMentLogic;
@property(retain, nonatomic) XMailSearchMailAddrLogic *searchMailAddrLogic; // @synthesize searchMailAddrLogic=_searchMailAddrLogic;
@property(retain, nonatomic) NSMutableDictionary *m_dicCookie; // @synthesize m_dicCookie;
- (void)onProfileChange;
- (void)clearMailPluginMsgIfNeeded;
- (void)asyncSearchMailAddrWithInput:(id)arg1;
- (int)getMailUnreadCount;
- (void)handleMailUnreadCount:(int)arg1;
- (id)composeSend:(id)arg1 sendtype:(unsigned int)arg2 mailid:(id)arg3;
- (void)uploadAttachmentWithFilePath:(id)arg1 fileName:(id)arg2;
- (void)uploadAttachmentWithData:(id)arg1 fileName:(id)arg2;
- (void)SetMailUnread:(id)arg1;
- (void)SyncMailUnreadCount;
- (id)GetMail:(id)arg1;
- (id)GetAllMailContact;
- (void)ResetSyncCount;
- (void)SyncContact;
- (id)GetCookieString;
- (id)GetCookie;
- (void)changeBindXmailAddr:(id)arg1;
- (id)init;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DeleteMailByMailId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

