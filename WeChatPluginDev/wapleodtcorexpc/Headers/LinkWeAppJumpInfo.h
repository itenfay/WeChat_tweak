//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface LinkWeAppJumpInfo : NSObject
{
    NSString *_appId;
    NSString *_pagePath;
    NSNumber *_appState;
    NSNumber *_isForbidSSignal;
    NSString *_shareKey;
    NSNumber *_scene;
    NSString *_sceneNote;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppId:(id)arg1 pagePath:(id)arg2 appState:(id)arg3 isForbidSSignal:(id)arg4 shareKey:(id)arg5 scene:(id)arg6 sceneNote:(id)arg7;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(retain, nonatomic) NSNumber *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(retain, nonatomic) NSNumber *isForbidSSignal; // @synthesize isForbidSSignal=_isForbidSSignal;
@property(retain, nonatomic) NSNumber *appState; // @synthesize appState=_appState;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toList;

@end

