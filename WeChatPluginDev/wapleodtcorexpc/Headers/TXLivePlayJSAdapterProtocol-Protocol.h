//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, TXLiveContainerView;
@protocol TXLivePlayJSAdapterDelegate;

@protocol TXLivePlayJSAdapterProtocol <NSObject>
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) unsigned int playerId;
@property(readonly, nonatomic) _Bool isVoip;
@property(nonatomic) _Bool audioOnlyMode;
@property(nonatomic) _Bool autoRotate;
@property(nonatomic) _Bool autoPlay;
@property(nonatomic) _Bool userNeedPlay;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *playUrl;
@property(nonatomic) long long playStateID;
@property(readonly, nonatomic) _Bool autoPauseIfNavigate;
@property(readonly, nonatomic) _Bool autoPauseIfOpenNative;
@property(nonatomic) __weak id <TXLivePlayJSAdapterDelegate> delegate;
@property(readonly, nonatomic) _Bool isFullScreen;
@property(readonly, nonatomic) TXLiveContainerView *containerView;
- (_Bool)updateAudioOnlyMode:(_Bool)arg1;
- (_Bool)isPause;
- (void)resumeLivePlay;
- (void)pauseByManual;
- (void)snapshotVideoEnd;
- (void)snapshotVideoBegin;
- (_Bool)setAudioActive:(_Bool)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)delaySetVideoFrameInIpadWhenQuitFullScreen:(struct CGRect)arg1;
- (void)relayoutForRotationWhileFullScreen;
- (void)snapshotLivePlayer:(_Bool)arg1 isSnapshotStream:(_Bool)arg2 snapshotCompletionBlock:(void (^)(UIImage *))arg3;
- (void)operateLivePlayerWithType:(NSString *)arg1 data:(NSArray *)arg2;
- (void)updateLivePlayerWithConfigs:(NSDictionary *)arg1;
- (void)updateContainerViewRect:(struct CGRect)arg1;
- (id)initLivePlayerWithId:(unsigned int)arg1 configs:(NSDictionary *)arg2 containerView:(TXLiveContainerView *)arg3 appId:(NSString *)arg4 delegate:(id <TXLivePlayJSAdapterDelegate>)arg5;
@end

