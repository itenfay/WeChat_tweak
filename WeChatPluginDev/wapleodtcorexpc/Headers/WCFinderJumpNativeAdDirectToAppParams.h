//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumpNativeAdDirectToAppParams : NSObject
{
    _Bool _internalJumpAppStore;
    NSString *_openSdkAppId;
    NSString *_appPageUrl;
    NSString *_appJumpUrl;
    NSString *_adExtInfo;
    NSString *_defaultJumpInfoBase64;
    NSString *_dialogAppIcon;
    NSString *_dialogAppName;
    NSString *_dialogButtonTitle;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dialogButtonTitle; // @synthesize dialogButtonTitle=_dialogButtonTitle;
@property(retain, nonatomic) NSString *dialogAppName; // @synthesize dialogAppName=_dialogAppName;
@property(retain, nonatomic) NSString *dialogAppIcon; // @synthesize dialogAppIcon=_dialogAppIcon;
@property(retain, nonatomic) NSString *defaultJumpInfoBase64; // @synthesize defaultJumpInfoBase64=_defaultJumpInfoBase64;
@property(retain, nonatomic) NSString *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(nonatomic) _Bool internalJumpAppStore; // @synthesize internalJumpAppStore=_internalJumpAppStore;
@property(retain, nonatomic) NSString *appJumpUrl; // @synthesize appJumpUrl=_appJumpUrl;
@property(retain, nonatomic) NSString *appPageUrl; // @synthesize appPageUrl=_appPageUrl;
@property(retain, nonatomic) NSString *openSdkAppId; // @synthesize openSdkAppId=_openSdkAppId;

@end

