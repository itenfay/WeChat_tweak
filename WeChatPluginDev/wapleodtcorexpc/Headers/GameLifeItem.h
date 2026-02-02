//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface GameLifeItem
{
    NSMutableDictionary *_digestWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *digestWording; // @synthesize digestWording=_digestWording;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

