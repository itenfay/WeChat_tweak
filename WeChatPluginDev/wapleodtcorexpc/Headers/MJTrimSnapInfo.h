//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet;

@interface MJTrimSnapInfo : NSObject
{
    NSMutableOrderedSet *_mutableAnchoredSegmentIDs;
    _Bool _hasStorySegment;
    CDStruct_1b6d18a9 _snapTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStorySegment; // @synthesize hasStorySegment=_hasStorySegment;
@property(readonly, nonatomic) CDStruct_1b6d18a9 snapTime; // @synthesize snapTime=_snapTime;
- (id)description;
- (void)appendAnchoredSegmentID:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *anchoredSegmentIDs;
- (id)initWithSnapTime:(CDStruct_1b6d18a9)arg1 hasStorySegment:(_Bool)arg2 anchoredSegmentIDs:(id)arg3;

@end

