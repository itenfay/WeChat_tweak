//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPublicResInfo : NSObject
{
    _Bool _bIsForceUpdate;
    unsigned int _version;
    unsigned int _updateTime;
    unsigned int _updateScene;
    unsigned int _updateType;
    unsigned int _oldVersion;
    NSString *_pkgDownloadUrl;
    NSString *_checkSum;
    NSString *_pkgPatchUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_oldVersion;
+ (void)PBArrayAdd_pkgPatchUrl;
+ (void)PBArrayAdd_updateType;
+ (void)PBArrayAdd_updateScene;
+ (void)PBArrayAdd_bIsForceUpdate;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_checkSum;
+ (void)PBArrayAdd_pkgDownloadUrl;
- (void).cxx_destruct;
@property(nonatomic) unsigned int oldVersion; // @synthesize oldVersion=_oldVersion;
@property(retain, nonatomic) NSString *pkgPatchUrl; // @synthesize pkgPatchUrl=_pkgPatchUrl;
@property(nonatomic) unsigned int updateType; // @synthesize updateType=_updateType;
@property(nonatomic) unsigned int updateScene; // @synthesize updateScene=_updateScene;
@property(nonatomic) _Bool bIsForceUpdate; // @synthesize bIsForceUpdate=_bIsForceUpdate;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum=_checkSum;
@property(retain, nonatomic) NSString *pkgDownloadUrl; // @synthesize pkgDownloadUrl=_pkgDownloadUrl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

