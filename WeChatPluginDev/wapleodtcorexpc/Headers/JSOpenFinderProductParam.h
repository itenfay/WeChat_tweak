//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface JSOpenFinderProductParam : NSObject
{
    NSDictionary *_dictLastAppInfo;
    id _referrerData;
    id _privateReferrerData;
    NSDictionary *_uiParam;
    long long _scene;
    NSString *_productPathCookies;
    NSString *_shareProductAppId;
    NSString *_shareProductId;
    NSString *_finderUsername;
    NSString *_ecSource;
    NSDictionary *_productExtraData;
    NSString *_entranceGMsgID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *entranceGMsgID; // @synthesize entranceGMsgID=_entranceGMsgID;
@property(retain, nonatomic) NSDictionary *productExtraData; // @synthesize productExtraData=_productExtraData;
@property(retain, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *shareProductId; // @synthesize shareProductId=_shareProductId;
@property(retain, nonatomic) NSString *shareProductAppId; // @synthesize shareProductAppId=_shareProductAppId;
@property(retain, nonatomic) NSString *productPathCookies; // @synthesize productPathCookies=_productPathCookies;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSDictionary *uiParam; // @synthesize uiParam=_uiParam;
@property(retain, nonatomic) id privateReferrerData; // @synthesize privateReferrerData=_privateReferrerData;
@property(retain, nonatomic) id referrerData; // @synthesize referrerData=_referrerData;
@property(retain, nonatomic) NSDictionary *dictLastAppInfo; // @synthesize dictLastAppInfo=_dictLastAppInfo;

@end

