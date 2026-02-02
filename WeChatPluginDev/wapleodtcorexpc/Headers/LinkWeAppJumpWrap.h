//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LinkWeAppJumpWrap
{
    _Bool _isForbidSSignal;
    unsigned int _appState;
    NSString *_appid;
    NSString *_pagePath;
    NSString *_shareKey;
    NSString *_chattoolUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *chattoolUsername; // @synthesize chattoolUsername=_chattoolUsername;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(nonatomic) _Bool isForbidSSignal; // @synthesize isForbidSSignal=_isForbidSSignal;
@property(nonatomic) unsigned int appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

