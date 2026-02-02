//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WATransferParamsModel : NSObject
{
    unsigned int _debugMode;
    NSString *_appid;
    NSString *_args;
    NSString *_name;
    NSString *_jsapiType;
    NSString *_path;
    unsigned long long _version;
    NSString *_instanceId;
    NSString *_sessionId;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *jsapiType; // @synthesize jsapiType=_jsapiType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *args; // @synthesize args=_args;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)toData;

@end

