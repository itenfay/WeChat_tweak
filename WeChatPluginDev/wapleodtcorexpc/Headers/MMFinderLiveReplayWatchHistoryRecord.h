//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveReplayWatchHistoryRecord : NSObject
{
    unsigned int _lastExitTime;
    unsigned long long _liveId;
}

+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_lastExitTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)lastExitTime;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)liveId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned int lastExitTime; // @synthesize lastExitTime=_lastExitTime;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

@end

