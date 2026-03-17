//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, UIView;
@protocol TXLivePushJSAdapterDelegate;

@protocol TXLivePushJSAdapterProtocol <NSObject>
@property(readonly, nonatomic) _Bool enableMic;
@property(readonly, nonatomic) _Bool muted;
@property(readonly, nonatomic) unsigned int pusherId;
@property(readonly, nonatomic) _Bool isVoip;
@property(readonly, nonatomic) _Bool isPreviewing;
@property(readonly, nonatomic) _Bool isPublishing;
@property(nonatomic) __weak id <TXLivePushJSAdapterDelegate> delegate;
- (void)onMonoServiceRejectMsg;
- (long long)sendVideoFrameData:(NSData *)arg1 param:(NSDictionary *)arg2;
- (long long)sendVideoPixelBuffer:(struct __CVBuffer *)arg1;
- (double)cameraZoomMaxRatio;
- (void)stopPreview;
- (void)startPreview;
- (void)enablePureAudioPush:(_Bool)arg1;
- (_Bool)setAudioActive:(_Bool)arg1;
- (void)restoreMicSetting;
- (void)saveAndForceDisableMic;
- (void)foregroundPush;
- (void)backgroundPush:(_Bool)arg1;
- (void)orientationChange;
- (void)enterForeground;
- (void)enterBackgroundThrowingEvent:(_Bool)arg1;
- (_Bool)operateLivePusherWithType:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)updateLivePusherWithConfigs:(NSDictionary *)arg1;
- (id)initLivePusherWithId:(unsigned int)arg1 configs:(NSDictionary *)arg2 preview:(UIView *)arg3 appId:(NSString *)arg4 delegate:(id <TXLivePushJSAdapterDelegate>)arg5;
@end

