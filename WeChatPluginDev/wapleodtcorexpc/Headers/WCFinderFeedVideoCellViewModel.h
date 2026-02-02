//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFeedVideoCellViewModel : NSObject
{
    _Bool _hideErrorTipsView;
    _Bool _hideOriginalContactView;
    _Bool _forceUseSystemPlayer;
    _Bool _forceResumePlaying;
    _Bool _ignoreGlobalResumePlaying;
    _Bool _isPauseBeforeStopPlay;
    _Bool _downloadSuccessful;
    unsigned long long _maxBitRate;
    double _playbackRate;
    double _playPositionBeforeStopPlay;
}

@property(nonatomic) _Bool downloadSuccessful; // @synthesize downloadSuccessful=_downloadSuccessful;
@property(nonatomic) double playPositionBeforeStopPlay; // @synthesize playPositionBeforeStopPlay=_playPositionBeforeStopPlay;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool isPauseBeforeStopPlay; // @synthesize isPauseBeforeStopPlay=_isPauseBeforeStopPlay;
@property(nonatomic) _Bool ignoreGlobalResumePlaying; // @synthesize ignoreGlobalResumePlaying=_ignoreGlobalResumePlaying;
@property(nonatomic) _Bool forceResumePlaying; // @synthesize forceResumePlaying=_forceResumePlaying;
@property(nonatomic) unsigned long long maxBitRate; // @synthesize maxBitRate=_maxBitRate;
@property(nonatomic) _Bool forceUseSystemPlayer; // @synthesize forceUseSystemPlayer=_forceUseSystemPlayer;
@property(nonatomic) _Bool hideOriginalContactView; // @synthesize hideOriginalContactView=_hideOriginalContactView;
@property(nonatomic) _Bool hideErrorTipsView; // @synthesize hideErrorTipsView=_hideErrorTipsView;

@end

