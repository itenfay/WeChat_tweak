//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface ChatLogMiddleImageCache : NSObject
{
    NSMutableSet *_needConvertImageInfo;
    long long _cacheVersion;
}

+ (void)saveStat:(id)arg1;
+ (id)loadStat;
+ (unsigned int)currentCacheVersion;
+ (id)getStatFilePath;
+ (void)initialize;
+ (void)PBArrayAdd_cacheVersion;
+ (void)PBArrayAdd_needConvertImageInfo;
- (void).cxx_destruct;
@property(nonatomic) long long cacheVersion; // @synthesize cacheVersion=_cacheVersion;
@property(retain, nonatomic) NSMutableSet *needConvertImageInfo; // @synthesize needConvertImageInfo=_needConvertImageInfo;
- (void)setNeedConvertPath:(id)arg1;
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

