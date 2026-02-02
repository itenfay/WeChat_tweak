//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJSegment : NSObject
{
    NSString *_segmentID;
    SharedPtr_3fcb0b09 _backingSegment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_3fcb0b09 backingSegment; // @synthesize backingSegment=_backingSegment;
@property(readonly, nonatomic) NSString *segmentID; // @synthesize segmentID=_segmentID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeInTimeline;
- (id)initWithBackingSegment:(const void *)arg1;

@end

