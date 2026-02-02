//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameLifeConversationCellViewModel;
@protocol GameLifeConversationCellDelegate;

@interface GameLifeConversationCell
{
    GameLifeConversationCellViewModel *_viewModel;
    id <GameLifeConversationCellDelegate> _gameLifeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GameLifeConversationCellDelegate> gameLifeDelegate; // @synthesize gameLifeDelegate=_gameLifeDelegate;
@property(retain, nonatomic) GameLifeConversationCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)handlePan:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithSessionCellData:(id)arg1;
- (id)initWithLayoutParam:(id)arg1 reuseIdentifier:(id)arg2;

@end

