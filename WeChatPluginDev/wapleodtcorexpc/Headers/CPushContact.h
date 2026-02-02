//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString;

@interface CPushContact
{
    NSString *m_nsSource;
    _Bool m_bReaded;
    unsigned int m_uiPushTime;
    NSString *m_nsDes;
    NSString *m_nsTicket;
    CMessageWrap *m_oMessage;
    unsigned int m_uiOpCode;
    unsigned int m_uiStatus;
    _Bool m_bSuspiciousUser;
    unsigned int m_uiOpenimVerifyStatus;
    NSString *m_nsChatRoomUserName;
    NSString *m_nsSourceUserName;
    NSString *m_nsSourceNickName;
    NSString *m_nsShareCardUserName;
    NSString *m_nsShareCardNickName;
    NSString *m_safetyWarning;
    NSString *m_safetyWarningDetail;
}

+ (id)thread_GetContactDetailFromMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_safetyWarningDetail; // @synthesize m_safetyWarningDetail;
@property(retain, nonatomic) NSString *m_safetyWarning; // @synthesize m_safetyWarning;
@property(nonatomic) _Bool m_bSuspiciousUser; // @synthesize m_bSuspiciousUser;
@property(nonatomic) unsigned int m_uiOpenimVerifyStatus; // @synthesize m_uiOpenimVerifyStatus;
@property(retain, nonatomic) NSString *m_nsShareCardNickName; // @synthesize m_nsShareCardNickName;
@property(retain, nonatomic) NSString *m_nsShareCardUserName; // @synthesize m_nsShareCardUserName;
@property(retain, nonatomic) NSString *m_nsSourceNickName; // @synthesize m_nsSourceNickName;
@property(retain, nonatomic) NSString *m_nsSourceUserName; // @synthesize m_nsSourceUserName;
@property(retain, nonatomic) NSString *m_nsChatRoomUserName; // @synthesize m_nsChatRoomUserName;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned int m_uiOpCode; // @synthesize m_uiOpCode;
@property(retain, nonatomic) CMessageWrap *m_oMessage; // @synthesize m_oMessage;
@property(retain, nonatomic) NSString *m_nsTicket; // @synthesize m_nsTicket;
@property(retain, nonatomic) NSString *m_nsDes; // @synthesize m_nsDes;
@property(nonatomic) unsigned int m_uiPushTime; // @synthesize m_uiPushTime;
@property(nonatomic) _Bool m_bReaded; // @synthesize m_bReaded;
@property(retain, nonatomic) NSString *m_nsSource; // @synthesize m_nsSource;
- (_Bool)isMobilePush;
- (_Bool)copyFieldFromContact:(id)arg1;
- (id)toContact;
- (long long)compare:(id)arg1;
- (id)description;
- (_Bool)isExpire;
- (void)getPushContactDes;
- (void)getPushContactSource;
- (_Bool)isAddRequestContact;
- (_Bool)isWaitingForVerify;
- (_Bool)isVerifyRequestFromMe;
- (_Bool)isMsgSendFromMe;
- (_Bool)IsShake;
- (id)initWithMsgWrap:(id)arg1;
- (long long)comparePushContactAscending:(id)arg1;
- (id)xmlForMessageWrapContent:(id)arg1 OpCode:(unsigned int)arg2;
- (_Bool)genPushContactFromMsgWrap:(id)arg1;
- (id)init;

@end

