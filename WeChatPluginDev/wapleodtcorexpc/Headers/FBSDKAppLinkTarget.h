//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FBSDKAppLinkTarget : NSObject
{
    NSURL *_URL;
    NSString *_appStoreId;
    NSString *_appName;
}

+ (id)appLinkTargetWithURL:(id)arg1 appStoreId:(id)arg2 appName:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appStoreId; // @synthesize appStoreId=_appStoreId;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;

@end

