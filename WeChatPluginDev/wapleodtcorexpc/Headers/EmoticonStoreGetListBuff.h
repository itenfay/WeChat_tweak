//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray;

@interface EmoticonStoreGetListBuff
{
    unsigned int m_eventId;
    unsigned int m_reqType;
    NSData *m_reqBuf;
    NSMutableArray *m_adArray;
    unsigned long long m_sessionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_sessionId; // @synthesize m_sessionId;
@property(retain, nonatomic) NSData *m_reqBuf; // @synthesize m_reqBuf;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) unsigned int m_reqType; // @synthesize m_reqType;
@property(retain, nonatomic) NSMutableArray *m_adArray; // @synthesize m_adArray;

@end

