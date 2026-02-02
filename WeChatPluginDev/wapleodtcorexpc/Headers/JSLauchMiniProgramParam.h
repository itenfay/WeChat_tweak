//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface JSLauchMiniProgramParam : NSObject
{
    NSDictionary *_dictLastAppInfo;
    NSString *_gameLiveInfoOfReferInfo;
    id _referrerData;
    id _privateReferrerData;
    NSDictionary *_halfScreenParam;
    long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSDictionary *halfScreenParam; // @synthesize halfScreenParam=_halfScreenParam;
@property(retain, nonatomic) id privateReferrerData; // @synthesize privateReferrerData=_privateReferrerData;
@property(retain, nonatomic) id referrerData; // @synthesize referrerData=_referrerData;
@property(retain, nonatomic) NSString *gameLiveInfoOfReferInfo; // @synthesize gameLiveInfoOfReferInfo=_gameLiveInfoOfReferInfo;
@property(retain, nonatomic) NSDictionary *dictLastAppInfo; // @synthesize dictLastAppInfo=_dictLastAppInfo;

@end

