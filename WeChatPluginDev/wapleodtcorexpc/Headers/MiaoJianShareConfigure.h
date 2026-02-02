//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MiaoJianShareParams, NSString;

@interface MiaoJianShareConfigure : NSObject
{
    NSString *_appstoreUrl;
    NSString *_scheme;
    unsigned long long _scene;
    MiaoJianShareParams *_shareParams;
}

+ (id)configureWithScene:(unsigned long long)arg1 shareParams:(id)arg2;
+ (id)configureWithScene:(unsigned long long)arg1;
+ (_Bool)isMiaoJianAppId:(id)arg1;
+ (_Bool)isMiaoJianAppInstalled;
+ (_Bool)longVideoEntranceEnable;
+ (_Bool)takePhotoEntranceEnable;
- (void).cxx_destruct;
@property(retain, nonatomic) MiaoJianShareParams *shareParams; // @synthesize shareParams=_shareParams;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *appstoreUrl; // @synthesize appstoreUrl=_appstoreUrl;
- (id)_generateAppstoreUrl;
- (id)_generateUniversalLinkUrl;
- (id)description;
- (void)updateParams:(id)arg1;
- (void)commentInit;
- (id)initWithScene:(unsigned long long)arg1 shareParams:(id)arg2;

@end

