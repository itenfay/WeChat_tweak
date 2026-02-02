//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LiteAppLauchMiniProgramParam : NSObject
{
    _Bool _openDataChannel;
    id _referrerData;
    id _privateReferrerData;
    NSString *_mode;
    NSDictionary *_halfScreenParam;
    NSDictionary *_singlePageParam;
    NSDictionary *_uiParam;
    long long _scene;
    NSString *_sceneNote;
    NSString *_liteGameInfo;
    NSString *_enterType;
    NSString *_loadingDarkModeStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *loadingDarkModeStyle; // @synthesize loadingDarkModeStyle=_loadingDarkModeStyle;
@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(retain, nonatomic) NSString *liteGameInfo; // @synthesize liteGameInfo=_liteGameInfo;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSDictionary *uiParam; // @synthesize uiParam=_uiParam;
@property(retain, nonatomic) NSDictionary *singlePageParam; // @synthesize singlePageParam=_singlePageParam;
@property(retain, nonatomic) NSDictionary *halfScreenParam; // @synthesize halfScreenParam=_halfScreenParam;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool openDataChannel; // @synthesize openDataChannel=_openDataChannel;
@property(retain, nonatomic) id privateReferrerData; // @synthesize privateReferrerData=_privateReferrerData;
@property(retain, nonatomic) id referrerData; // @synthesize referrerData=_referrerData;

@end

