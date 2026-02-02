//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiteAppViewController, MMLiveCDNPlayerView, NSString, WCFinderDataItem;
@protocol MMFinderLiveFrontEndPreviewViewChannel;

@interface MMFinderLiveFrontEndPreviewView : UIView
{
    NSString *_anchor;
    MMLiteAppViewController *_liteApp;
    id <MMFinderLiveFrontEndPreviewViewChannel> _channel;
    MMLiveCDNPlayerView *_playerView;
    WCFinderDataItem *_dataItem;
    long long _lastControlAction;
    struct CGSize _videoSize;
}

+ (id)viewStartIfNeededWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long lastControlAction; // @synthesize lastControlAction=_lastControlAction;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <MMFinderLiveFrontEndPreviewViewChannel> channel; // @synthesize channel=_channel;
@property(nonatomic) __weak MMLiteAppViewController *liteApp; // @synthesize liteApp=_liteApp;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (void)prepareEnterLive;
- (void)enterLive:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)handleJSMethod:(id)arg1 params:(id)arg2 WithResult:(CDUnknownBlockType)arg3;
- (void)updateObjectFit:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (void)onPlayAudioModeChange:(_Bool)arg1;
- (void)onPlayChangeSize:(struct CGSize)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (void)onPlayBegin;
- (void)startLive:(id)arg1 forPlayControl:(_Bool)arg2;
- (void)startLive:(id)arg1;
- (void)startLiveWithAnchor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

