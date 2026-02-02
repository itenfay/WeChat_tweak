//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentBackgroundMusicInfo
{
    int _autoPlayType;
    NSString *_voiceUrl;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) int autoPlayType; // @synthesize autoPlayType=_autoPlayType;
@property(retain, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

