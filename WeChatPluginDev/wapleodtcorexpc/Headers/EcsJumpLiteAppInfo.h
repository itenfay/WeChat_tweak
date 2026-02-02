//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EcsJumpLiteAppInfo
{
    NSString *_appId;
    NSString *_path;
    NSString *_query;
    NSString *_defaultUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultUrl; // @synthesize defaultUrl=_defaultUrl;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

