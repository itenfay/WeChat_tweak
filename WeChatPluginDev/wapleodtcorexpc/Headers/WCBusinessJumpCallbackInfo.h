//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCBusinessJumpCallbackInfo : NSObject
{
    long long _sceneValue;
    NSString *_appid;
    NSString *_universalLink;
    NSString *_callbackUrl;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(retain, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) long long sceneValue; // @synthesize sceneValue=_sceneValue;

@end

