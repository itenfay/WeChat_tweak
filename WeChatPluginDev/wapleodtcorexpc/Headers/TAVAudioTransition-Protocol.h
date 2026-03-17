//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVMutableAudioMixInputParameters, NSString;

@protocol TAVAudioTransition
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)applyNextAudioMixInputParameters:(AVMutableAudioMixInputParameters *)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)applyPreviousAudioMixInputParameters:(AVMutableAudioMixInputParameters *)arg1 timeRange:(CDStruct_e83c9415)arg2;
@end

