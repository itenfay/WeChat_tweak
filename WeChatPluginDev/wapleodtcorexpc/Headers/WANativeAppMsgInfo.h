//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WANativeAppMsgInfo
{
    unsigned int _type;
    NSString *_appNameMultiLanguageKey;
    NSString *_sourceName;
    NSString *_sourceIconUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceIconUrl; // @synthesize sourceIconUrl=_sourceIconUrl;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *appNameMultiLanguageKey; // @synthesize appNameMultiLanguageKey=_appNameMultiLanguageKey;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)appDisplayName;
- (_Bool)isValid;
- (_Bool)isNearbyNativeAppMsg;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

