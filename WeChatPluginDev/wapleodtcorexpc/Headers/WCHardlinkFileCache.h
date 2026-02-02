//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCHardlinkFileCache : NSObject
{
    NSMutableDictionary *_dicFileInfo;
    long long _cacheVersion;
}

+ (void)saveStat:(id)arg1;
+ (id)loadStatFromFile;
+ (unsigned int)currentCacheVersion;
+ (id)getFileInfoStatFile;
+ (void)initialize;
+ (void)PBArrayAdd_cacheVersion;
+ (void)PBArrayAdd_dicFileInfo;
- (void).cxx_destruct;
@property(nonatomic) long long cacheVersion; // @synthesize cacheVersion=_cacheVersion;
@property(retain, nonatomic) NSMutableDictionary *dicFileInfo; // @synthesize dicFileInfo=_dicFileInfo;
- (id)getFileCacheWithKey:(id)arg1;
- (void)setFileCache:(id)arg1 withKey:(id)arg2;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

