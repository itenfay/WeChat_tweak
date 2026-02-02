//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCSNSNodeVideoView;

@interface WCTogetherVideoFeedCell
{
    WCSNSNodeVideoView *_videoView;
}

+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSNSNodeVideoView *videoView; // @synthesize videoView=_videoView;
- (void)onWillFullPlay:(_Bool *)arg1 sightView:(id)arg2;
- (void)onClickWCSight:(id)arg1;
- (void)stopPlaying;
- (void)startPlaying;
- (void)resetPlayingWithViewItem:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutItemContentView;
- (void)loadItemContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

