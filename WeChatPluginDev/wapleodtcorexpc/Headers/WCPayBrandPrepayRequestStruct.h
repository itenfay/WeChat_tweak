//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBrandPrepayRequestStruct : NSObject
{
    NSString *appId;
    NSString *nonceStr;
    NSString *timestamp;
    NSString *package;
    NSString *paySign;
    NSString *signType;
    NSString *stepInURL;
    NSString *stepInAppUserName;
    unsigned int payChannel;
    NSString *extInfo;
    unsigned int payScene;
    NSString *weappPayCookies;
    unsigned int _weappEnterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int weappEnterScene; // @synthesize weappEnterScene=_weappEnterScene;
@property(retain, nonatomic) NSString *weappPayCookies; // @synthesize weappPayCookies;
@property(nonatomic) unsigned int payScene; // @synthesize payScene;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(nonatomic) unsigned int payChannel; // @synthesize payChannel;
@property(retain, nonatomic) NSString *stepInURL; // @synthesize stepInURL;
@property(retain, nonatomic) NSString *stepInAppUserName; // @synthesize stepInAppUserName;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *paySign; // @synthesize paySign;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;

@end

