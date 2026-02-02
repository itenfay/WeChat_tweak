//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMPayLiteAppResourceGetCGI
{
    NSString *_appId;
    NSString *_resourceName;
    NSArray *_localResources;
    CDUnknownBlockType _success;
    CDUnknownBlockType _fail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fail; // @synthesize fail=_fail;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(retain, nonatomic) NSArray *localResources; // @synthesize localResources=_localResources;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)assembleResourceInfo;
- (void)createRequest;
- (id)initWithAppId:(id)arg1 resourceName:(id)arg2 localResouces:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

