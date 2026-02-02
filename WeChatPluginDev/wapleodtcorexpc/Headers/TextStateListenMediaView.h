//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol TextStateBaseMediaViewDelegate;

@interface TextStateListenMediaView
{
    NSString *_textStateId;
    double _startPlayTime;
}

- (void).cxx_destruct;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(copy, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
- (_Bool)shouldResidentMedia;
- (_Bool)residentMediaIfNeeded;
- (void)clearPlayTime;
- (void)stopPlayMedia;
- (void)startPlayMedia;
- (void)pausePlayMedia;
@property(readonly, nonatomic) double mediaAspectRatio;
- (double)fullScreenAspectRatio;
- (void)textstateComminit;
- (id)initWithListenId:(id)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)initWithTingItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisForceMuted

@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMuted) _Bool muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted

@property(readonly) Class superclass;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TextStateBaseMediaViewDelegate>",?,W,N


@end

