//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPreloadVideoRecord : NSObject
{
    _Bool _bNonAutoClean;
    _Bool _bPreloadCompleted;
    unsigned int _accessTime;
    unsigned int _hasPreloadSize;
    unsigned int _configPreloadPercent;
    unsigned int _totalSize;
    NSString *_tid;
    NSString *_mid;
    NSString *_url;
}

+ (void)initialize;
+ (void)PBArrayAdd_bPreloadCompleted;
+ (void)PBArrayAdd_totalSize;
+ (void)PBArrayAdd_bNonAutoClean;
+ (void)PBArrayAdd_configPreloadPercent;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_hasPreloadSize;
+ (void)PBArrayAdd_accessTime;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) _Bool bPreloadCompleted; // @synthesize bPreloadCompleted=_bPreloadCompleted;
@property(nonatomic) unsigned int totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) _Bool bNonAutoClean; // @synthesize bNonAutoClean=_bNonAutoClean;
@property(nonatomic) unsigned int configPreloadPercent; // @synthesize configPreloadPercent=_configPreloadPercent;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int hasPreloadSize; // @synthesize hasPreloadSize=_hasPreloadSize;
@property(nonatomic) unsigned int accessTime; // @synthesize accessTime=_accessTime;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)genTempPath;
- (id)pathForPreloadVideo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

