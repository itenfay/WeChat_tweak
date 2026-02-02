//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebOptimizationAuthLiteControlData, NSDictionary, NSString;

@interface MMWebA8KeyLiteUrlResult
{
    unsigned int _scene;
    long long _subBizScene;
    MMWebOptimizationAuthLiteControlData *_authControlData;
    NSDictionary *_httpHeader;
    NSString *_extInfo;
    NSString *_prefetchId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *prefetchId; // @synthesize prefetchId=_prefetchId;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader=_httpHeader;
@property(retain, nonatomic) MMWebOptimizationAuthLiteControlData *authControlData; // @synthesize authControlData=_authControlData;
@property(nonatomic) long long subBizScene; // @synthesize subBizScene=_subBizScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;

@end

