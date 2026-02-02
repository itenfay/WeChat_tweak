//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CustomVideoCompositionInstruction : NSObject
{
    _Bool _enablePostProcessing;
    _Bool _containsTweening;
    int _passthroughTrackID;
    NSArray *_requiredSourceTrackIDs;
    NSArray *_layerInstructions;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *layerInstructions; // @synthesize layerInstructions=_layerInstructions;
@property(readonly, nonatomic) int passthroughTrackID; // @synthesize passthroughTrackID=_passthroughTrackID;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(nonatomic) _Bool containsTweening; // @synthesize containsTweening=_containsTweening;
@property(nonatomic) _Bool enablePostProcessing; // @synthesize enablePostProcessing=_enablePostProcessing;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)initWithSourceTrackIDs:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithPassthroughTrackID:(int)arg1 timeRange:(CDStruct_e83c9415)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly) Class superclass;

@end

