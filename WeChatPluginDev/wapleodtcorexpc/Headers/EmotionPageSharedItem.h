//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface EmotionPageSharedItem
{
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (id)xmlToDictionary:(struct XmlReaderNode_t *)arg1;
- (id)dictionaryToXml:(id)arg1;
- (id)toXML;
- (_Bool)fromXMLStr:(id)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

