//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAMPLinkNode
{
    unsigned int _debugModeType;
    unsigned int _appVersion;
    NSString *_appid;
    NSString *_pagePath;
    NSString *_nickName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

