//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVTrackTransition, NSNumber, NSString, TAVClip;

@interface MAVCompositionTrack : NSObject
{
    unsigned long long _trackId;
    double _playRate;
    double _volume;
    NSNumber *_rotate;
    MAVTrackTransition *_transition;
    NSString *_path;
    unsigned long long _type;
    TAVClip *_internalClip;
    struct CGSize _sourceSize;
    CDStruct_1b6d18a9 _sourceDuration;
    struct CGRect _cropRect;
    struct CGRect _trackCropRect;
    CDStruct_e83c9415 _timeRange;
    CDStruct_e83c9415 _trackTimeRange;
    CDStruct_e83c9415 _transitionTimeRange;
}

+ (struct CGAffineTransform)adjustPreferredTransform:(struct CGAffineTransform)arg1 withNaturalSize:(struct CGSize)arg2;
+ (void)makeChain:(id)arg1;
+ (id)KEY_EXTRA_TRACK;
+ (struct CGAffineTransform)wcvm_adjustPreferredTransform:(struct CGAffineTransform)arg1 withNaturalSize:(struct CGSize)arg2;
+ (void)setFixesTransform:(_Bool)arg1;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) TAVClip *internalClip; // @synthesize internalClip=_internalClip;
@property(nonatomic) struct CGSize sourceSize; // @synthesize sourceSize=_sourceSize;
@property(nonatomic) CDStruct_1b6d18a9 sourceDuration; // @synthesize sourceDuration=_sourceDuration;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) CDStruct_e83c9415 transitionTimeRange; // @synthesize transitionTimeRange=_transitionTimeRange;
@property(retain, nonatomic) MAVTrackTransition *transition; // @synthesize transition=_transition;
@property(nonatomic) struct CGRect trackCropRect; // @synthesize trackCropRect=_trackCropRect;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) NSNumber *rotate; // @synthesize rotate=_rotate;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(nonatomic) CDStruct_e83c9415 trackTimeRange; // @synthesize trackTimeRange=_trackTimeRange;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
- (id)description;
- (void)initImageClipInfo:(struct CGImage *)arg1;
- (void)initVideoClipInfo:(id)arg1 asset:(id)arg2;
- (id)buildVideoClip;
- (_Bool)hasAudio;
- (_Bool)hasVideo;
- (CDStruct_1b6d18a9)trackDuration;
- (CDStruct_1b6d18a9)trackStartTime;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)startTime;
- (id)getResource;
- (id)buildThumbSource;
- (id)buildClip;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1 type:(unsigned long long)arg2;
- (id)initVideoTrackWithAsset:(id)arg1 path:(id)arg2;

@end

