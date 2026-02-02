//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportSplitPluginCodeStatisItem
{
    NSString *_provider;
    long long _version;
    long long _stage;
}

- (void).cxx_destruct;
@property(nonatomic) long long stage; // @synthesize stage=_stage;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(copy, nonatomic) NSString *instanceId;

@end

