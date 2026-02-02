//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, WCPayBaseMessageViewModel;

@interface WCPayBaseMessageCellView
{
    UILabel *m_descLabel;
    UILabel *m_titleLabel;
    UIImageView *m_iconView;
}

- (void).cxx_destruct;
- (_Bool)disableImplicitAnimations;
- (void)onTouchUpInside;
- (void)initIconView;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)layoutContentView;

// Remaining properties
@property(retain, nonatomic) WCPayBaseMessageViewModel *viewModel; // @dynamic viewModel;

@end

