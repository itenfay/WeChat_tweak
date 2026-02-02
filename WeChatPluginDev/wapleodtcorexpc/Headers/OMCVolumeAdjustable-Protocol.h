//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol OMCVolumeAdjustable <NSObject>
@property(nonatomic) double phaseOutDuration;
@property(nonatomic) double phaseInDuration;
@property(nonatomic) _Bool isAudioMuted;
@property(nonatomic) float volume;
@property(readonly, nonatomic) _Bool canAdjustVolume;
@end

