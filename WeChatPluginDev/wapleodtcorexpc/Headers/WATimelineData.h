//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WATimelineData : NSObject
{
    _Bool _isGame;
    unsigned int _debugMode;
    unsigned int _version;
    unsigned int _subType;
    unsigned int _appBrandPriority;
    unsigned int _liteAppPriority;
    NSString *_username;
    NSString *_pagepath;
    NSString *_title;
    NSString *_desc;
    NSData *_thumbImageData;
    NSString *_thumbUrl;
    NSString *_linkUrl;
    NSString *_defaultUrl;
    NSString *_shareActionId;
    NSString *_messageExtraData;
    NSString *_preloadResources;
    NSString *_liteGameInfo;
    NSString *_liteAppBizData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int liteAppPriority; // @synthesize liteAppPriority=_liteAppPriority;
@property(retain, nonatomic) NSString *liteAppBizData; // @synthesize liteAppBizData=_liteAppBizData;
@property(nonatomic) unsigned int appBrandPriority; // @synthesize appBrandPriority=_appBrandPriority;
@property(retain, nonatomic) NSString *liteGameInfo; // @synthesize liteGameInfo=_liteGameInfo;
@property(retain, nonatomic) NSString *preloadResources; // @synthesize preloadResources=_preloadResources;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(retain, nonatomic) NSString *shareActionId; // @synthesize shareActionId=_shareActionId;
@property(retain, nonatomic) NSString *defaultUrl; // @synthesize defaultUrl=_defaultUrl;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSData *thumbImageData; // @synthesize thumbImageData=_thumbImageData;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

