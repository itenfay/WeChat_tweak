//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImageView, UIView, WAWebViewController;

@interface WAFloatingViewBaseWrapper : NSObject
{
    _Bool _showProgressBar;
    _Bool _needAddToOriginParentView;
    _Bool _isPaused;
    unsigned int _playerId;
    long long _type;
    NSString *_videoURL;
    id _videoDelegate;
    id _originVideoDelegate;
    WAWebViewController *_webview;
    UIView *_videoOriginalParentView;
    double _startTime;
    UIImageView *_videoSnapShotView;
    struct CGPoint _floatVideoInitialPosition;
    struct CGRect _videoOriginalFrame;
    struct CGRect _videoOriginParentViewInWindowFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *videoSnapShotView; // @synthesize videoSnapShotView=_videoSnapShotView;
@property(nonatomic) struct CGPoint floatVideoInitialPosition; // @synthesize floatVideoInitialPosition=_floatVideoInitialPosition;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) struct CGRect videoOriginParentViewInWindowFrame; // @synthesize videoOriginParentViewInWindowFrame=_videoOriginParentViewInWindowFrame;
@property(nonatomic) struct CGRect videoOriginalFrame; // @synthesize videoOriginalFrame=_videoOriginalFrame;
@property(nonatomic) __weak UIView *videoOriginalParentView; // @synthesize videoOriginalParentView=_videoOriginalParentView;
@property(nonatomic) __weak WAWebViewController *webview; // @synthesize webview=_webview;
@property(nonatomic) unsigned int playerId; // @synthesize playerId=_playerId;
@property(nonatomic) __weak id originVideoDelegate; // @synthesize originVideoDelegate=_originVideoDelegate;
@property(nonatomic) __weak id videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) _Bool needAddToOriginParentView; // @synthesize needAddToOriginParentView=_needAddToOriginParentView;
@property(nonatomic) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)addToVideoView:(id)arg1;
- (id)getCurrentSnapShotImage;
- (_Bool)isLoading;
- (_Bool)canFloat;
- (id)playerView;
- (void)stop;
- (void)play;
- (void)pause;
- (void)resetParams;
- (void)setParams;
- (void)updateFromDic:(id)arg1;
- (_Bool)parseFromDic:(id)arg1;
- (void)setPlayerId:(unsigned int)arg1 webview:(id)arg2;

@end

