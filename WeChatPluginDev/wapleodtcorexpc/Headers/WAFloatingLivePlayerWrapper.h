//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol ITXLivePlayJSAdapter;

@interface WAFloatingLivePlayerWrapper
{
    id <ITXLivePlayJSAdapter> _livePlayer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ITXLivePlayJSAdapter> livePlayer; // @synthesize livePlayer=_livePlayer;
- (id)videoURL;
- (_Bool)isLoading;
- (void)stop;
- (void)play;
- (void)pause;
- (id)playerView;
- (void)resetParams;
- (void)setParams;

@end

