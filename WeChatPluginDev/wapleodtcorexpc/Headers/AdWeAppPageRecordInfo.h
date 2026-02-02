//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AdWeAppPageRecordInfo : NSObject
{
    NSString *_appid;
    NSString *_pagePath;
    NSString *_adInfo;
    unsigned long long _startTimestamp;
    unsigned long long _scene;
    NSString *_sceneNote;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) NSString *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

