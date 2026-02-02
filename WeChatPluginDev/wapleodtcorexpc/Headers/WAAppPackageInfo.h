//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppPackageInfo
{
    unsigned int _type;
    NSString *_md5;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)toXML;
- (_Bool)fromXMLStr:(id)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

