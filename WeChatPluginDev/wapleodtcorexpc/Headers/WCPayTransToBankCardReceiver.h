//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayTransBankItem;

@interface WCPayTransToBankCardReceiver
{
    NSString *_m_nsRemarkName;
    NSString *_m_nsUserTrueName;
    NSString *_m_nsEncryptedUsrName;
    NSString *_m_nsBankcardSeqNo;
    NSString *_m_nsBankcardEncNo;
    NSString *_m_nsBankcardTailNo;
    WCPayTransBankItem *_m_bankItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransBankItem *m_bankItem; // @synthesize m_bankItem=_m_bankItem;
@property(retain, nonatomic) NSString *m_nsBankcardTailNo; // @synthesize m_nsBankcardTailNo=_m_nsBankcardTailNo;
@property(retain, nonatomic) NSString *m_nsBankcardEncNo; // @synthesize m_nsBankcardEncNo=_m_nsBankcardEncNo;
@property(retain, nonatomic) NSString *m_nsBankcardSeqNo; // @synthesize m_nsBankcardSeqNo=_m_nsBankcardSeqNo;
@property(retain, nonatomic) NSString *m_nsEncryptedUsrName; // @synthesize m_nsEncryptedUsrName=_m_nsEncryptedUsrName;
@property(retain, nonatomic) NSString *m_nsUserTrueName; // @synthesize m_nsUserTrueName=_m_nsUserTrueName;
@property(retain, nonatomic) NSString *m_nsRemarkName; // @synthesize m_nsRemarkName=_m_nsRemarkName;
- (id)initWithTransferRecord:(id)arg1;

@end

