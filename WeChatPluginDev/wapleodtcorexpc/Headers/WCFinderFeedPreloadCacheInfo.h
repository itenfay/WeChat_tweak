//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFeedPreloadCacheInfo : NSObject
{
    NSString *_tid;
    NSString *_fileFormat;
    NSString *_mediaURL;
    unsigned long long _cacheTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_mediaURL;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_fileFormat;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(copy, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isEqual:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

