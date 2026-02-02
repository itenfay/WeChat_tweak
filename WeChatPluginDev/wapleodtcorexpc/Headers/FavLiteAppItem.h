//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavLiteAppItem
{
    unsigned int _mediaType;
    unsigned int _jumpType;
    long long _subType;
    NSString *_title;
    NSString *_des;
    NSString *_nickName;
    NSString *_thumbUrl;
    NSString *_appId;
    NSString *_query;
    NSString *_pagePath;
    NSString *_fallbackUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fallbackUrl; // @synthesize fallbackUrl=_fallbackUrl;
@property(retain, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *des; // @synthesize des=_des;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long subType; // @synthesize subType=_subType;

@end

