//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol ContactInitLogicExt;

@interface ContactInitLogic
{
    id <ContactInitLogicExt> m_delegate;
    NSMutableArray *m_usernames;
    NSMutableArray *m_failedUsernames;
    struct ContactInitSeqs m_contactInitSeqs;
    unsigned long long m_totalContactCount;
    unsigned long long m_finishedContactCount;
}

+ (void)setContactInitedStatus:(_Bool)arg1;
+ (_Bool)isContactInited;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkIsSucceed;
- (void)handleGetContactsRsp:(id)arg1;
- (_Bool)tryGetContacts;
- (void)doGetContactLogic;
- (void)handleGetUsernamesRsp:(id)arg1;
- (_Bool)tryGetUsernames;
- (_Bool)startContactInitLogic;
- (id)initWithDelegate:(id)arg1;

@end

