//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EmoticonAppMsgItem
{
    unsigned int _emojiType;
    unsigned int _length;
    NSString *_m_nsMD5;
    double _m_emoticonWidth;
    double _m_emoticonHeight;
    NSString *_m_nsAesKey;
    NSString *_m_nsCdnUrl;
    NSString *_m_nsExternUrl;
    NSString *_m_nsExternMd5;
    NSString *_m_nsProductId;
    NSString *_m_nsDesignerId;
    NSString *_m_nsAttachedText;
    NSString *_m_nsEncryptedUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsEncryptedUrl; // @synthesize m_nsEncryptedUrl=_m_nsEncryptedUrl;
@property(retain, nonatomic) NSString *m_nsAttachedText; // @synthesize m_nsAttachedText=_m_nsAttachedText;
@property(retain, nonatomic) NSString *m_nsDesignerId; // @synthesize m_nsDesignerId=_m_nsDesignerId;
@property(retain, nonatomic) NSString *m_nsProductId; // @synthesize m_nsProductId=_m_nsProductId;
@property(retain, nonatomic) NSString *m_nsExternMd5; // @synthesize m_nsExternMd5=_m_nsExternMd5;
@property(retain, nonatomic) NSString *m_nsExternUrl; // @synthesize m_nsExternUrl=_m_nsExternUrl;
@property(retain, nonatomic) NSString *m_nsCdnUrl; // @synthesize m_nsCdnUrl=_m_nsCdnUrl;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey=_m_nsAesKey;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int emojiType; // @synthesize emojiType=_emojiType;
@property(nonatomic) double m_emoticonHeight; // @synthesize m_emoticonHeight=_m_emoticonHeight;
@property(nonatomic) double m_emoticonWidth; // @synthesize m_emoticonWidth=_m_emoticonWidth;
@property(retain, nonatomic) NSString *m_nsMD5; // @synthesize m_nsMD5=_m_nsMD5;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

