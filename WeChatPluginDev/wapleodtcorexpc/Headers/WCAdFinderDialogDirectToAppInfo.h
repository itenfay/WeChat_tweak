//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdFinderDialogDirectToAppInfo
{
    _Bool _internalJumpAppStore;
    NSString *_openSdkAppId;
    NSString *_appPageUrl;
    NSString *_appJumpUrl;
    NSString *_adExtInfo;
    NSString *_defaultJumpInfoBase64;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *defaultJumpInfoBase64; // @synthesize defaultJumpInfoBase64=_defaultJumpInfoBase64;
@property(retain, nonatomic) NSString *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(nonatomic) _Bool internalJumpAppStore; // @synthesize internalJumpAppStore=_internalJumpAppStore;
@property(retain, nonatomic) NSString *appJumpUrl; // @synthesize appJumpUrl=_appJumpUrl;
@property(retain, nonatomic) NSString *appPageUrl; // @synthesize appPageUrl=_appPageUrl;
@property(retain, nonatomic) NSString *openSdkAppId; // @synthesize openSdkAppId=_openSdkAppId;

@end

