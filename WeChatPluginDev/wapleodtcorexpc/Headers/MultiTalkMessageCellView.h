//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiTalkMessageViewModel, UIImageView;

@interface MultiTalkMessageCellView
{
    UIImageView *m_backgroundImageView;
}

- (void).cxx_destruct;
- (void)onChatBackgroundChanged:(id)arg1;
- (_Bool)canCellShowOperationMenu;
- (void)layoutContentView;
- (_Bool)needUpdateLightStyle;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MultiTalkMessageViewModel *viewModel; // @dynamic viewModel;

@end

