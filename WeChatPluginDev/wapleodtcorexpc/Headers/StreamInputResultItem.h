//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface StreamInputResultItem
{
    unsigned int _m_uiSequence;
    unsigned int _m_uiEndFlag;
    NSString *_voiceId;
    unsigned long long _m_uiCreateTime;
    NSString *_text;
    NSArray *_keywordList;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag=_m_uiEndFlag;
@property(nonatomic) unsigned int m_uiSequence; // @synthesize m_uiSequence=_m_uiSequence;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long m_uiCreateTime; // @synthesize m_uiCreateTime=_m_uiCreateTime;
@property(copy, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;
- (void)getValueFrom:(id)arg1;
- (_Bool)lessThanOrEqual:(id)arg1;

@end

