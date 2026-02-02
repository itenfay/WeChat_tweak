//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAAppBrandNotifyPluginCodeItem : NSObject
{
    _Bool _autoUpdate;
    unsigned int _version;
    unsigned int _debugDevKey;
    NSString *_provider;
    NSString *_md5;
    NSString *_prefixPath;
    NSArray *_contextsList;
    NSString *_versionDesc;
    NSString *_semver;
}

+ (void)initialize;
+ (void)PBArrayAdd_semver;
+ (void)PBArrayAdd_versionDesc;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_autoUpdate;
+ (void)PBArrayAdd_contextsList;
+ (void)PBArrayAdd_prefixPath;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_provider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *semver; // @synthesize semver=_semver;
@property(retain, nonatomic) NSString *versionDesc; // @synthesize versionDesc=_versionDesc;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(nonatomic) _Bool autoUpdate; // @synthesize autoUpdate=_autoUpdate;
@property(retain, nonatomic) NSArray *contextsList; // @synthesize contextsList=_contextsList;
@property(retain, nonatomic) NSString *prefixPath; // @synthesize prefixPath=_prefixPath;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

