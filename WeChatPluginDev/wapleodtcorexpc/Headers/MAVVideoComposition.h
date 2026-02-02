//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVEffectManager, MAVVLogDirectorMultiVideoCompositionEffect, NSMutableArray, TAVSourceExportSession;

@interface MAVVideoComposition : NSObject
{
    _Bool _enableOriginAudio;
    _Bool _revert;
    _Bool _enableFastCrop;
    _Bool _enabledBGMCyclePlay;
    float _playFps;
    NSMutableArray *_trackArray;
    MAVEffectManager *_vLogEffectMgr;
    CDUnknownBlockType _renderCallback;
    TAVSourceExportSession *_exportSession;
    MAVVLogDirectorMultiVideoCompositionEffect *_mixEffect;
    MAVVideoComposition *_selfPtr;
    struct CGSize _assetSize;
    struct CGRect _outputCrop;
    struct CGRect _displayScreenRect;
    CDStruct_e83c9415 _playRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVVideoComposition *selfPtr; // @synthesize selfPtr=_selfPtr;
@property(retain, nonatomic) MAVVLogDirectorMultiVideoCompositionEffect *mixEffect; // @synthesize mixEffect=_mixEffect;
@property(retain, nonatomic) TAVSourceExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(copy, nonatomic) CDUnknownBlockType renderCallback; // @synthesize renderCallback=_renderCallback;
@property(nonatomic) _Bool enabledBGMCyclePlay; // @synthesize enabledBGMCyclePlay=_enabledBGMCyclePlay;
@property(nonatomic, getter=isEnableFastCrop) _Bool enableFastCrop; // @synthesize enableFastCrop=_enableFastCrop;
@property(retain, nonatomic) MAVEffectManager *vLogEffectMgr; // @synthesize vLogEffectMgr=_vLogEffectMgr;
@property(nonatomic, getter=isRevert) _Bool revert; // @synthesize revert=_revert;
@property(nonatomic, getter=isEnableOriginSound) _Bool enableOriginAudio; // @synthesize enableOriginAudio=_enableOriginAudio;
@property(nonatomic) struct CGRect displayScreenRect; // @synthesize displayScreenRect=_displayScreenRect;
@property(nonatomic) struct CGRect outputCrop; // @synthesize outputCrop=_outputCrop;
@property(nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property(nonatomic) float playFps; // @synthesize playFps=_playFps;
@property(nonatomic) CDStruct_e83c9415 playRange; // @synthesize playRange=_playRange;
@property(retain, nonatomic) NSMutableArray *trackArray; // @synthesize trackArray=_trackArray;
- (id)description;
- (_Bool)cancelExport;
- (void)continueExporting;
- (void)pauseExporting;
- (_Bool)exportWithPath:(id)arg1 config:(id)arg2 callback:(CDUnknownBlockType)arg3 progressCallBlock:(CDUnknownBlockType)arg4;
- (void)getThumbImage:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)buildSimpleSource:(float)arg1;
- (id)buildSource:(_Bool)arg1 fps:(float)arg2;
- (id)buildSource:(_Bool)arg1;
- (id)buildSource;
- (id)buildTrackChannel:(id)arg1;
- (id)createComposition:(id)arg1;
- (void)assetSize:(struct CGSize)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 sourceDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (void)removeTrack:(id)arg1;
- (void)updateTrack:(int)arg1 track:(id)arg2;
- (void)addTrack:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTrackArray:(id)arg1;

@end

