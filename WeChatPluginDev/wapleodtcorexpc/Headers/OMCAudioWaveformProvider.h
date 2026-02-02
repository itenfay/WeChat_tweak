//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCClipSegment;

@interface OMCAudioWaveformProvider : NSObject
{
    OMCClipSegment *_clipSegment;
}

- (void).cxx_destruct;
- (_Bool)fetchWaveform:(void *)arg1 startIndex:(int *)arg2 timeRange:(CDStruct_e83c9415)arg3 forChannel:(int)arg4;
- (void)updateSampleCount:(int)arg1 forChannel:(int)arg2;
- (void)updateSampleRate:(float)arg1 forChannel:(int)arg2;
- (id)initWithClipSegment:(id)arg1;

@end

