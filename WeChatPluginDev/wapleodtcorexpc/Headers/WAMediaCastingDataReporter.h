//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMediaCastingDataReporter : NSObject
{
    unsigned int _appServiceType;
    unsigned int _component;
    NSString *_appID;
    NSString *_pagePath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int component; // @synthesize component=_component;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)generateReportItemWithEventType:(unsigned long long)arg1 videoState:(unsigned long long)arg2 videoURI:(id)arg3;
- (void)reportUserSelectWithVideoState:(unsigned long long)arg1 modelName:(id)arg2 manufacturer:(id)arg3 protocolType:(unsigned long long)arg4 videoURI:(id)arg5;
- (void)reportClickWithEventType:(unsigned long long)arg1 videoState:(unsigned long long)arg2 protocolType:(unsigned long long)arg3 videoURI:(id)arg4;
- (void)reportCastingResult:(_Bool)arg1 eventType:(unsigned long long)arg2 modelName:(id)arg3 manufacturer:(id)arg4 videoState:(unsigned long long)arg5 protocolType:(unsigned long long)arg6 videoURI:(id)arg7;
- (void)reportDeviceCount:(unsigned long long)arg1 eventType:(unsigned long long)arg2 videoState:(unsigned long long)arg3 videoURI:(id)arg4;
- (id)initWithAppID:(id)arg1 pagePath:(id)arg2 appServiceType:(unsigned int)arg3 component:(unsigned int)arg4;

@end

