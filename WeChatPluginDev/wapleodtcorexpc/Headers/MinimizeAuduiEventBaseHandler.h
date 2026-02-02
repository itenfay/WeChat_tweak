//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeAudioPanelPlayingInfo, NSString;
@protocol IMinimizeAudioEventHandlerDelegate;

@interface MinimizeAuduiEventBaseHandler : NSObject
{
    MinimizeAudioPanelPlayingInfo *_playingInfo;
    id <IMinimizeAudioEventHandlerDelegate> _delegate;
}

+ (id)tapeSourceIconForPlayingInfo:(id)arg1;
+ (id)tapeTintColorForPlayingInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IMinimizeAudioEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MinimizeAudioPanelPlayingInfo *playingInfo; // @synthesize playingInfo=_playingInfo;
- (void)onPlayingInfoBizIdReplacedByNewBizId:(id)arg1;
- (void)onPlayingInfoChanged;
- (id)previewView;
- (void)onOpenWithTransitionContext:(id)arg1;
- (void)onEnterTaskWithTransitionContext:(id)arg1;
- (void)onOpenDetail;
- (void)onOpen;
- (void)onStop;
- (void)onPause;
- (void)onPlay;
- (id)initWithPlayingInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

