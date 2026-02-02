//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVVolumeProcessingNode : NSObject
{
    float _startVolume;
    float _endVolume;
    CDUnknownBlockType _timingFunction;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) float endVolume; // @synthesize endVolume=_endVolume;
@property(nonatomic) float startVolume; // @synthesize startVolume=_startVolume;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList *)arg1 renderInfo:(id)arg2;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 startVolume:(float)arg2 endVolume:(float)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

