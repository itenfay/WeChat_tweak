//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateWeappOPWrap : NSObject
{
    unsigned int _weappVersion;
    unsigned int _weappState;
    NSString *_username;
    NSString *_path;
    NSString *_appID;
    NSString *_iconUrl;
    NSString *_nickname;
    NSString *_imageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned int weappState; // @synthesize weappState=_weappState;
@property(nonatomic) unsigned int weappVersion; // @synthesize weappVersion=_weappVersion;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

