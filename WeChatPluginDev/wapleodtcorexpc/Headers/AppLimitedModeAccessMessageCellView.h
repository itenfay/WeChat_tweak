//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppLimitedModeAccessMessageViewModel, UIImageView, UILabel;

@interface AppLimitedModeAccessMessageCellView
{
    UIImageView *m_thumbImageView;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
}

- (void).cxx_destruct;
- (void)updateThumbImage;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)addThumbImageView;
- (void)addDescLabel;
- (void)addTitleLabel;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppLimitedModeAccessMessageViewModel *viewModel; // @dynamic viewModel;

@end

