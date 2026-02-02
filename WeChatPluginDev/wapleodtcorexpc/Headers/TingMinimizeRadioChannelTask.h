//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniAudioTaskContentView, NSString, TingRadioChannelMiniView;

@interface TingMinimizeRadioChannelTask
{
    _Bool _disableOpen;
    MiniAudioTaskContentView *_contentView;
    TingRadioChannelMiniView *_customView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableOpen; // @synthesize disableOpen=_disableOpen;
@property(retain, nonatomic) TingRadioChannelMiniView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) MiniAudioTaskContentView *contentView; // @synthesize contentView=_contentView;
- (void)openTask;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(_Bool)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)updateContentViewIfNeedWithForce:(_Bool)arg1;
- (id)contentDefaultImage;
- (id)taskContainerView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

