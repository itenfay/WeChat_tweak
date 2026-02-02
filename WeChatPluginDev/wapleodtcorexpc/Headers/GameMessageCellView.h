//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameMessageViewModel, MMTimer, UIImageView;

@interface GameMessageCellView
{
    unsigned int m_uiCurrImageIndex;
    unsigned int m_uiAnimationTimes;
    UIImageView *m_gameImageView;
    MMTimer *m_gameTimer;
}

+ (id)getGameImageByIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)operationMenuItems;
- (void)stopAnimation;
- (void)doAnimation;
- (void)handleGameTimer:(id)arg1;
- (void)stopGameTimer;
- (void)startGameTimer;
- (void)onAppear;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) GameMessageViewModel *viewModel; // @dynamic viewModel;

@end

