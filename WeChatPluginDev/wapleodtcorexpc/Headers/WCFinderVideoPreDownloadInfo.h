//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderVideoPreDownloadInfo : NSObject
{
    _Bool _isComplete;
    _Bool _isMinBytesComplete;
    _Bool _isIdleMonitorTask;
    NSString *_tid;
    unsigned long long _videoIndex;
    NSString *_videoFlag;
    NSString *_mediaIdentifier;
    unsigned long long _preloadSize;
    unsigned long long _videoTotalSize;
    unsigned long long _cacheTime;
}

+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_index_12:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (id)swift_mediaIdentifier;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)mediaIdentifier;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_isIdleMonitorTask;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)isIdleMonitorTask;
+ (id)swift_isMinBytesComplete;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)isMinBytesComplete;
+ (id)swift_isComplete;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)isComplete;
+ (id)swift_videoTotalSize;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)videoTotalSize;
+ (id)swift_preloadSize;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)preloadSize;
+ (id)swift_videoFlag;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)videoFlag;
+ (id)swift_videoIndex;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)videoIndex;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) _Bool isIdleMonitorTask; // @synthesize isIdleMonitorTask=_isIdleMonitorTask;
@property(nonatomic) _Bool isMinBytesComplete; // @synthesize isMinBytesComplete=_isMinBytesComplete;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) unsigned long long videoTotalSize; // @synthesize videoTotalSize=_videoTotalSize;
@property(nonatomic) unsigned long long preloadSize; // @synthesize preloadSize=_preloadSize;
@property(retain, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property(retain, nonatomic) NSString *videoFlag; // @synthesize videoFlag=_videoFlag;
@property(nonatomic) unsigned long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPreloadComplete;

@end

