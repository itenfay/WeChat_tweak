//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebSearchRouteExptItem : NSObject
{
    _Bool _preloadLiteApp;
    _Bool _checkUpdate;
    _Bool _syncCheckUpdate;
    NSString *_liteAppId;
    NSString *_liteAppPage;
    NSString *_liteAppQuery;
    unsigned long long _scene;
    NSString *_exptKey;
    NSString *_extInfo;
    NSString *_preloadParams;
    NSString *_enterType;
    NSString *_minVersion;
    unsigned long long _keepAliveSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long keepAliveSeconds; // @synthesize keepAliveSeconds=_keepAliveSeconds;
@property(copy, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(nonatomic) _Bool syncCheckUpdate; // @synthesize syncCheckUpdate=_syncCheckUpdate;
@property(nonatomic) _Bool checkUpdate; // @synthesize checkUpdate=_checkUpdate;
@property(copy, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(nonatomic) _Bool preloadLiteApp; // @synthesize preloadLiteApp=_preloadLiteApp;
@property(copy, nonatomic) NSString *preloadParams; // @synthesize preloadParams=_preloadParams;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *exptKey; // @synthesize exptKey=_exptKey;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *liteAppQuery; // @synthesize liteAppQuery=_liteAppQuery;
@property(copy, nonatomic) NSString *liteAppPage; // @synthesize liteAppPage=_liteAppPage;
@property(copy, nonatomic) NSString *liteAppId; // @synthesize liteAppId=_liteAppId;
- (id)pageId;
- (_Bool)useLiteAppWithHitExptReport:(_Bool)arg1;
- (_Bool)useLiteApp;
- (id)init;

@end

