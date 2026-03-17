//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TextStateBaseMediaViewDelegate;

@protocol TextStateBaseMediaView <NSObject>
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)pausePlayMedia;
- (void)startPlayMedia;

@optional
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisForceMuted

@property(nonatomic, getter=isMuted) _Bool muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted

@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TextStateBaseMediaViewDelegate>",?,W,N

- (void)setTransitionProgress:(double)arg1;
- (void)pausePlayMediaVideoStream;
- (void)resetPlayMedia;
- (void)setIsLivePlayUseFeedBack:(_Bool)arg1;
- (_Bool)isCurrentPlaying;
- (_Bool)longPressEvent:(_Bool)arg1;
- (void)stopPlayMedia;
@end

