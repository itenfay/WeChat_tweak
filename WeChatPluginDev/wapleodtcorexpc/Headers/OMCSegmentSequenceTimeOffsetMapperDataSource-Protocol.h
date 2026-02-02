//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, OMCSegmentSequenceTimeOffsetMapper;

@protocol OMCSegmentSequenceTimeOffsetMapperDataSource <NSObject>
- (_Bool)shouldUseTimeOffsetScaleForSequenceMapper:(OMCSegmentSequenceTimeOffsetMapper *)arg1;
- (double)timeOffsetScaleForSequenceMapper:(OMCSegmentSequenceTimeOffsetMapper *)arg1;
- (NSArray *)segmentViewMappersForSequenceMapper:(OMCSegmentSequenceTimeOffsetMapper *)arg1;
@end

