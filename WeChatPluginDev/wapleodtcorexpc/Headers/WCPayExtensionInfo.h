//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayExtensionInfo
{
    _Bool _m_isNeedFailover;
    unsigned int _m_uiFee;
    unsigned int _m_expireTime;
    int _m_businessType;
    NSString *_m_nsPayExtTemplateId;
    NSString *_m_nsOutTradeNo;
    NSString *_m_nsFeeType;
    NSString *_m_voiceContent;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int m_businessType; // @synthesize m_businessType=_m_businessType;
@property(nonatomic) _Bool m_isNeedFailover; // @synthesize m_isNeedFailover=_m_isNeedFailover;
@property(nonatomic) unsigned int m_expireTime; // @synthesize m_expireTime=_m_expireTime;
@property(retain, nonatomic) NSString *m_voiceContent; // @synthesize m_voiceContent=_m_voiceContent;
@property(retain, nonatomic) NSString *m_nsFeeType; // @synthesize m_nsFeeType=_m_nsFeeType;
@property(nonatomic) unsigned int m_uiFee; // @synthesize m_uiFee=_m_uiFee;
@property(retain, nonatomic) NSString *m_nsOutTradeNo; // @synthesize m_nsOutTradeNo=_m_nsOutTradeNo;
@property(retain, nonatomic) NSString *m_nsPayExtTemplateId; // @synthesize m_nsPayExtTemplateId=_m_nsPayExtTemplateId;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toXML;

@end

