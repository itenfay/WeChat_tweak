//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UINavigationController;

@interface WAProfileViewControllerParameter : NSObject
{
    _Bool _needShowBottomFeedback;
    unsigned int _fromAppVersion;
    NSString *_userName;
    unsigned long long _enterScene;
    NSString *_sceneNote;
    unsigned long long _exposeFrom;
    NSString *_pagePath;
    unsigned long long _fromDebugMode;
    NSDictionary *_exposeExtraInfo;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    UINavigationController *_navigationController;
    NSString *_hostAppid;
    NSString *_snapShotLocalId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *snapShotLocalId; // @synthesize snapShotLocalId=_snapShotLocalId;
@property(copy, nonatomic) NSString *hostAppid; // @synthesize hostAppid=_hostAppid;
@property(nonatomic) _Bool needShowBottomFeedback; // @synthesize needShowBottomFeedback=_needShowBottomFeedback;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(retain, nonatomic) NSDictionary *exposeExtraInfo; // @synthesize exposeExtraInfo=_exposeExtraInfo;
@property(nonatomic) unsigned int fromAppVersion; // @synthesize fromAppVersion=_fromAppVersion;
@property(nonatomic) unsigned long long fromDebugMode; // @synthesize fromDebugMode=_fromDebugMode;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long exposeFrom; // @synthesize exposeFrom=_exposeFrom;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

