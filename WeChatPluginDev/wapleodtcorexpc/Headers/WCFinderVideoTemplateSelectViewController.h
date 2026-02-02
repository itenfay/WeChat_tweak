//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVPlayer, AVPlayerLayer, NSString;
@protocol WCFinderVideoTemplateSelectVCDelegate;

@interface WCFinderVideoTemplateSelectViewController
{
    id <WCFinderVideoTemplateSelectVCDelegate> _delegate;
    unsigned long long _enterScene;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    NSString *_currentPlayUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentPlayUrl; // @synthesize currentPlayUrl=_currentPlayUrl;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) __weak id <WCFinderVideoTemplateSelectVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onClickDone;
- (void)onClickCancel;
- (void)relayoutView;
- (void)reloadData;
- (id)createViewModel;
- (void)pauseVideo;
- (void)playVideo;
- (void)setupDisplayView;
- (void)onPlayerPlayToEnd:(id)arg1;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

