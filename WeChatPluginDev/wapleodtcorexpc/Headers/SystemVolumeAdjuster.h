//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPVolumeView;

@interface SystemVolumeAdjuster : NSObject
{
    float _originalVolume;
    float _setVolume;
    MPVolumeView *_volumeView;
}

- (void).cxx_destruct;
@property(nonatomic) float setVolume; // @synthesize setVolume=_setVolume;
@property(nonatomic) float originalVolume; // @synthesize originalVolume=_originalVolume;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
- (void)__setVolume:(float)arg1 isCleanStep:(_Bool)arg2;
- (void)restoreOriginalVolume;
- (void)setVolume:(float)arg1 willSetBlock:(CDUnknownBlockType)arg2;
- (void)setVolume:(float)arg1;
- (void)dealloc;
- (id)init;

@end

