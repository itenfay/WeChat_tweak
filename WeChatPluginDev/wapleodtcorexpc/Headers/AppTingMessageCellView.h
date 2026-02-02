//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppTingMessageViewModel, TingItem, TingSharedAudioView;

@interface AppTingMessageCellView
{
    TingSharedAudioView *_audioContentView;
    TingItem *_tingItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(retain, nonatomic) TingSharedAudioView *audioContentView; // @synthesize audioContentView=_audioContentView;
- (void)onClickAsRefer;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onAppButtonClicked:(id)arg1;
- (_Bool)canClickSourceView;
- (_Bool)isFromMusicShake;
- (void)onTouchUpInside;
- (void)onAppear;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (_Bool)canShowAddToStarMenuItem;
- (void)onAddToListenStar:(id)arg1;
- (id)addToListenStarMenuItem;
- (id)categoryItem;
- (id)shareListenItem;
- (void)setHighlighted:(_Bool)arg1;
- (void)onThumbImageCompleted:(_Bool)arg1;
- (void)layoutContentView;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, nonatomic) AppTingMessageViewModel *viewModel; // @dynamic viewModel;

@end

