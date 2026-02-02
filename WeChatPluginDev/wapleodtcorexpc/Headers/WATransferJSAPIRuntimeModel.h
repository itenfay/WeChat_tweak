//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WATransferJSAPIRuntimeModel : NSObject
{
    _Bool _isService;
    NSString *_appID;
    NSString *_permissionAppID;
    NSString *_jsapiName;
    NSDictionary *_jsapiParams;
    NSString *_pageRelativePath;
    NSString *_title;
    unsigned long long _wxaScene;
}

+ (id)fromEventHandler:(id)arg1 jsapiParams:(id)arg2 wxaScene:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long wxaScene; // @synthesize wxaScene=_wxaScene;
@property(nonatomic) _Bool isService; // @synthesize isService=_isService;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pageRelativePath; // @synthesize pageRelativePath=_pageRelativePath;
@property(copy, nonatomic) NSDictionary *jsapiParams; // @synthesize jsapiParams=_jsapiParams;
@property(copy, nonatomic) NSString *jsapiName; // @synthesize jsapiName=_jsapiName;
@property(copy, nonatomic) NSString *permissionAppID; // @synthesize permissionAppID=_permissionAppID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;

@end

