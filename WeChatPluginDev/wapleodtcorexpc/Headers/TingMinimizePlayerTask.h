//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniAudioTaskContentView, NSString;

@interface TingMinimizePlayerTask
{
    MiniAudioTaskContentView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniAudioTaskContentView *contentView; // @synthesize contentView=_contentView;
- (_Bool)handleOpenTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(_Bool)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (id)taskContainerView;
- (id)contentDefaultImage;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)__doSetContentViewImage:(id)arg1 url:(id)arg2;
- (_Bool)canMinimizeBecomeActive:(id)arg1;
- (void)updateContentViewIfNeedWithForce:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

