//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CameraScanCombineConfig, CameraScanCombineModelInfo, NSString;

@interface CameraScanGoodsExtensionDetectorConfig
{
    NSString *_svrConfigData;
    long long _svrRequestInterval;
    long long _svrRequestUploadTimeout;
    long long _svrRequestExchangeTimeout;
    CameraScanCombineModelInfo *_curModelInfo;
    CameraScanCombineConfig *_combineConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CameraScanCombineConfig *combineConfig; // @synthesize combineConfig=_combineConfig;
@property(retain, nonatomic) CameraScanCombineModelInfo *curModelInfo; // @synthesize curModelInfo=_curModelInfo;
@property(nonatomic) long long svrRequestExchangeTimeout; // @synthesize svrRequestExchangeTimeout=_svrRequestExchangeTimeout;
@property(nonatomic) long long svrRequestUploadTimeout; // @synthesize svrRequestUploadTimeout=_svrRequestUploadTimeout;
@property(nonatomic) long long svrRequestInterval; // @synthesize svrRequestInterval=_svrRequestInterval;
@property(copy, nonatomic) NSString *svrConfigData; // @synthesize svrConfigData=_svrConfigData;

@end

