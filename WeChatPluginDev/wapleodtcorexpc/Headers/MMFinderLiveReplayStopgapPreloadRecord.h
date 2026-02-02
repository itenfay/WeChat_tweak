//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveReplayStopgapPreloadRecord : NSObject
{
    _Bool _completed;
    unsigned int _qualityLevel;
    unsigned long long _liveId;
    unsigned long long _stopgapId;
    NSString *_qualityTag;
}

+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_completed;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)completed;
+ (id)swift_qualityTag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)qualityTag;
+ (id)swift_qualityLevel;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)qualityLevel;
+ (id)swift_stopgapId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)stopgapId;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)liveId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSString *qualityTag; // @synthesize qualityTag=_qualityTag;
@property(nonatomic) unsigned int qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(nonatomic) unsigned long long stopgapId; // @synthesize stopgapId=_stopgapId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(readonly, nonatomic) NSString *stopgapKey;

@end

