//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStatePlayerViewForFinder
{
    _Bool _muted;
    id <TextStateBaseMediaViewDelegate> _textStateDelegate;
}

+ (id)mediaWithContentVM:(id)arg1 isSubScene:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate; // @synthesize textStateDelegate=_textStateDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TextStateBaseMediaViewDelegate>",?,W,N,V_textStateDelegate

@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted,V_muted

- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFinderFeedDataSourceBeCleanWithTid:(id)arg1;
- (void)onFinderDataCacheHasBeCleaned;
- (void)layoutSubviews;
- (void)onPlayToEnd;
- (void)resetPlayMedia;
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (_Bool)isVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisForceMuted

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

