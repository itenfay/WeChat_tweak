//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface MMWebOptimJSContextTaskConfig
{
    unsigned int _bizScene;
    unsigned int _subBizScene;
    NSString *_domain;
    NSString *_path;
    NSString *_manifestUrl;
    NSString *_appId;
    NSString *_userName;
    NSData *_businessData;
    NSData *_jsapiControlBytesData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *jsapiControlBytesData; // @synthesize jsapiControlBytesData=_jsapiControlBytesData;
@property(retain, nonatomic) NSData *businessData; // @synthesize businessData=_businessData;
@property(nonatomic) unsigned int subBizScene; // @synthesize subBizScene=_subBizScene;
@property(nonatomic) unsigned int bizScene; // @synthesize bizScene=_bizScene;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *manifestUrl; // @synthesize manifestUrl=_manifestUrl;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)description;
- (id)taskId;
- (_Bool)isValid;

@end

