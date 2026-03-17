//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVResource : NSObject
{
    struct CGSize _size;
    CDStruct_1b6d18a9 _scaledDuration;
    CDStruct_1b6d18a9 _duration;
    CDStruct_e83c9415 _sourceTimeRange;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) CDStruct_e83c9415 sourceTimeRange; // @synthesize sourceTimeRange=_sourceTimeRange;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pcmBufferAtTimeRange:(CDStruct_e83c9415)arg1 audioFormat:(id)arg2;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)tracksForType:(id)arg1;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (CDStruct_1b6d18a9)sourceTimeForTimelineTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 scaledDuration; // @synthesize scaledDuration=_scaledDuration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

