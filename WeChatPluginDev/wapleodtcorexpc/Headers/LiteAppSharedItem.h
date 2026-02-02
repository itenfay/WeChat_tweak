//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppSharedItem
{
    unsigned int _sourceType;
    NSString *_appId;
    NSString *_path;
    NSString *_query;
    NSString *_minVersion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)isAsk;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

