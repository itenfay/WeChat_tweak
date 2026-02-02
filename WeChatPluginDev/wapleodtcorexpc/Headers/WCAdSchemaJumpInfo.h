//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdOpenAppHalfScreenInfo, WCAdSchemaDoubleLinkInfo;

@interface WCAdSchemaJumpInfo : NSObject
{
    _Bool _bInternalJump;
    NSString *_sdkAppId;
    NSString *_appJumpUrl;
    NSString *_appPageUrl;
    WCAdOpenAppHalfScreenInfo *_openAppHalfScreenInfo;
    WCAdSchemaDoubleLinkInfo *_doubleLinkInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdSchemaDoubleLinkInfo *doubleLinkInfo; // @synthesize doubleLinkInfo=_doubleLinkInfo;
@property(retain, nonatomic) WCAdOpenAppHalfScreenInfo *openAppHalfScreenInfo; // @synthesize openAppHalfScreenInfo=_openAppHalfScreenInfo;
@property(nonatomic) _Bool bInternalJump; // @synthesize bInternalJump=_bInternalJump;
@property(retain, nonatomic) NSString *appPageUrl; // @synthesize appPageUrl=_appPageUrl;
@property(retain, nonatomic) NSString *appJumpUrl; // @synthesize appJumpUrl=_appJumpUrl;
@property(retain, nonatomic) NSString *sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

