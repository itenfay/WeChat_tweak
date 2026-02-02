//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface WAFavoriteData : NSObject
{
    _Bool _disableForward;
    unsigned int _version;
    unsigned int _debugMode;
    unsigned int _sourceType;
    unsigned int _subType;
    NSString *_username;
    NSString *_appid;
    NSString *_title;
    NSString *_desc;
    NSString *_iconUrl;
    NSString *_pagepath;
    NSString *_sourceDisplayName;
    NSString *_defaultLink;
    NSString *_messageExtraData;
    NSString *_thumbUrl;
    NSData *_thumbData;
    NSDictionary *_jsapiParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *jsapiParams; // @synthesize jsapiParams=_jsapiParams;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) unsigned int subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(retain, nonatomic) NSString *defaultLink; // @synthesize defaultLink=_defaultLink;
@property(retain, nonatomic) NSString *sourceDisplayName; // @synthesize sourceDisplayName=_sourceDisplayName;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

