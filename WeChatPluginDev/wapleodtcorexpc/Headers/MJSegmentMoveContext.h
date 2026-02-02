//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CALayer;

@interface MJSegmentMoveContext : NSObject
{
    CALayer *_movingSegmentSnapshotLayer;
    struct CGPoint _movingSegmentOriginalLocation;
    struct CGPoint _locationInMovingSnapshotLayer;
    struct CGPoint _movingSegmentSnapshotOffset;
    struct CGRect _movingSegmentOriginalFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint movingSegmentSnapshotOffset; // @synthesize movingSegmentSnapshotOffset=_movingSegmentSnapshotOffset;
@property(nonatomic) struct CGPoint locationInMovingSnapshotLayer; // @synthesize locationInMovingSnapshotLayer=_locationInMovingSnapshotLayer;
@property(nonatomic) struct CGPoint movingSegmentOriginalLocation; // @synthesize movingSegmentOriginalLocation=_movingSegmentOriginalLocation;
@property(nonatomic) struct CGRect movingSegmentOriginalFrame; // @synthesize movingSegmentOriginalFrame=_movingSegmentOriginalFrame;
@property(retain, nonatomic) CALayer *movingSegmentSnapshotLayer; // @synthesize movingSegmentSnapshotLayer=_movingSegmentSnapshotLayer;
- (id)init;

@end

