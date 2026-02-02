//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface YYWKSchemeGuardModel : NSObject
{
    _Bool _hasNonGameHost;
    _Bool _enableCustomHttpSchemeFailed;
    _Bool _registerCustomHttpSchemeFailed;
    _Bool _isSchemeGameWkWebViewVisible;
    int _gameWkWebViewCrashCt;
    int _continuousCrash;
    NSString *_nonGameHostMainUrl;
    NSString *_nonGameHostReourceUrl;
    double _lastDisableTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastDisableTime; // @synthesize lastDisableTime=_lastDisableTime;
@property(retain, nonatomic) NSString *nonGameHostReourceUrl; // @synthesize nonGameHostReourceUrl=_nonGameHostReourceUrl;
@property(retain, nonatomic) NSString *nonGameHostMainUrl; // @synthesize nonGameHostMainUrl=_nonGameHostMainUrl;
@property(nonatomic) int continuousCrash; // @synthesize continuousCrash=_continuousCrash;
@property(nonatomic) int gameWkWebViewCrashCt; // @synthesize gameWkWebViewCrashCt=_gameWkWebViewCrashCt;
@property(nonatomic) _Bool isSchemeGameWkWebViewVisible; // @synthesize isSchemeGameWkWebViewVisible=_isSchemeGameWkWebViewVisible;
@property(nonatomic) _Bool registerCustomHttpSchemeFailed; // @synthesize registerCustomHttpSchemeFailed=_registerCustomHttpSchemeFailed;
@property(nonatomic) _Bool enableCustomHttpSchemeFailed; // @synthesize enableCustomHttpSchemeFailed=_enableCustomHttpSchemeFailed;
@property(nonatomic) _Bool hasNonGameHost; // @synthesize hasNonGameHost=_hasNonGameHost;

@end

