//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppBrandUpdateWxaUsageListDeleteAppInfo : NSObject
{
    unsigned int _appType;
    NSString *_username;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

