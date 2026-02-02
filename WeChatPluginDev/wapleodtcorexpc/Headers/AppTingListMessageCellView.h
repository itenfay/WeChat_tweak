//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppTingListMessageViewModel, TingSharedListView;
@protocol TingFlowPlayerProtocol;

@interface AppTingListMessageCellView
{
    TingSharedListView *_listContentView;
    id <TingFlowPlayerProtocol> _player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> player; // @synthesize player=_player;
@property(retain, nonatomic) TingSharedListView *listContentView; // @synthesize listContentView=_listContentView;
- (void)onClickAsRefer;
- (void)onTouchUpInside;
- (void)onAppear;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (id)categoryItem;
- (void)setHighlighted:(_Bool)arg1;
- (void)onThumbImageCompleted:(_Bool)arg1;
- (void)layoutContentView;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, nonatomic) AppTingListMessageViewModel *viewModel; // @dynamic viewModel;

@end

