//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCSegment;

@interface MJSegmentEditingStateViewModel : NSObject
{
    OMCSegment *_segment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMCSegment *segment; // @synthesize segment=_segment;
- (void)_leaveEditingState;
- (void)segmentLeaveEditingStateIfNeeded:(id)arg1;
- (void)leaveEditingState;
- (void)enterEditingStateWithSegmentVM:(id)arg1 previewTime:(CDStruct_1b6d18a9)arg2;
- (void)enterEditingStateWithSegmentVM:(id)arg1;

@end

