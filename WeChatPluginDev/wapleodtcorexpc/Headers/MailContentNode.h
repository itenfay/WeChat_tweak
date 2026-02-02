//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MailContentNode
{
    long long m_n64MsgId;
    int m_uiType;
    NSString *m_nsNickName;
    NSString *m_nsSrcTime;
    NSString *m_nsTitle;
    NSString *m_nsDescription;
    NSString *m_nsThumbPath;
    unsigned int m_dataSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_dataSize; // @synthesize m_dataSize;
@property(retain, nonatomic) NSString *m_nsThumbPath; // @synthesize m_nsThumbPath;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsSrcTime; // @synthesize m_nsSrcTime;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(nonatomic) int m_uiType; // @synthesize m_uiType;
@property(nonatomic) long long m_n64MsgId; // @synthesize m_n64MsgId;

@end

