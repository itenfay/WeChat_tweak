//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TLProfileBaseMediaViewDelegate;

@protocol TLProfileBaseMediaView <NSObject>
@property(readonly, nonatomic) double tl_mediaAspectRatio;
- (void)tl_stopPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_startPlayMedia;

@optional
@property(nonatomic) _Bool tl_muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) __weak id <TLProfileBaseMediaViewDelegate> tl_profileDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TLProfileBaseMediaViewDelegate>",?,W,N

- (_Bool)tl_invalid;
- (void)tl_pausePlayMediaVideoStream;
- (void)tl_resetPlayMedia;
@end

