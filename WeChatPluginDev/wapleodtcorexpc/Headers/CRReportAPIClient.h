//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface CRReportAPIClient
{
}

+ (id)clientWithSession:(id)arg1;
+ (id)client;
- (id)handleBodyData:(id)arg1;
- (id)getAMSSign:(id)arg1;
- (id)paramsGET:(id)arg1;
- (id)innerData;
- (void)reportPayload:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;

@end

