//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VoiceAppMsgItem
{
    NSString *_voiceurl;
    NSString *_aeskey;
    NSString *_voicemd5;
    long long _length;
    long long _playtime;
    long long _format;
    NSString *_voice_key_words;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *voice_key_words; // @synthesize voice_key_words=_voice_key_words;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long playtime; // @synthesize playtime=_playtime;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *voicemd5; // @synthesize voicemd5=_voicemd5;
@property(retain, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(retain, nonatomic) NSString *voiceurl; // @synthesize voiceurl=_voiceurl;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

