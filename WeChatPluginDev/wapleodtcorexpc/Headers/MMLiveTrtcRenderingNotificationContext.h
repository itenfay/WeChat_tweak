//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMLiveTrtcRenderingNotificationDelegate;

@interface MMLiveTrtcRenderingNotificationContext : NSObject
{
    id <MMLiveTrtcRenderingNotificationDelegate> _micFocusPreviewDelegate;
    id <MMLiveTrtcRenderingNotificationDelegate> _micAudiencePreviewDelegate;
    id <MMLiveTrtcRenderingNotificationDelegate> _ktvSingerPreviewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveTrtcRenderingNotificationDelegate> ktvSingerPreviewDelegate; // @synthesize ktvSingerPreviewDelegate=_ktvSingerPreviewDelegate;
@property(nonatomic) __weak id <MMLiveTrtcRenderingNotificationDelegate> micAudiencePreviewDelegate; // @synthesize micAudiencePreviewDelegate=_micAudiencePreviewDelegate;
@property(nonatomic) __weak id <MMLiveTrtcRenderingNotificationDelegate> micFocusPreviewDelegate; // @synthesize micFocusPreviewDelegate=_micFocusPreviewDelegate;
- (_Bool)shouldSendAggregatedNotification;
- (_Bool)shouldSendRawNotification;
- (void)notifyRenderImageBuffer:(struct __CVBuffer *)arg1 forUserId:(id)arg2 byLiveTask:(id)arg3;
- (void)notifyLiveCaptureDidOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 localRenderFlipX:(_Bool)arg2 byLiveTask:(id)arg3;
- (void)notifyRenderVideoFrame:(id)arg1 userId:(id)arg2 streamType:(long long)arg3 byLiveTask:(id)arg4;

@end

