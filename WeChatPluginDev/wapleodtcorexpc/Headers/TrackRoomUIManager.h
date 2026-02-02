//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TrackRoomView;

@interface TrackRoomUIManager
{
    TrackRoomView *_trackRoomView;
    _Bool _exitAtHidden;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool exitAtHidden; // @synthesize exitAtHidden=_exitAtHidden;
- (void)onMMLiveWillStart;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)cleanResource;
- (void)onTrackRoomViewHide;
- (void)onTrackRoomViewClose;
- (void)autoExitAtHidden;
- (_Bool)isShowingTrackRoom;
- (void)hideTrackRoomView;
- (void)showTrackRoomView;
- (void)closeTrackRoomView:(unsigned int)arg1 reason:(unsigned int)arg2;
- (_Bool)openTrackRoom:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

