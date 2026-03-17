//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVAudioProcessingRenderInfo : NSObject
{
    struct AudioStreamBasicDescription _processingFormat;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _segmentTimeRange;
}

@property(nonatomic) struct AudioStreamBasicDescription processingFormat; // @synthesize processingFormat=_processingFormat;
@property(nonatomic) CDStruct_e83c9415 segmentTimeRange; // @synthesize segmentTimeRange=_segmentTimeRange;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;

@end

