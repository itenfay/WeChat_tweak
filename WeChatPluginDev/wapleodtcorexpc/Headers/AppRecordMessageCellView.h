//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppRecordMessageViewModel, UILabel;

@interface AppRecordMessageCellView
{
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (_Bool)canShowFavoriteMenuItem;
- (void)initDescLabel;
- (void)initTitleLabel;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppRecordMessageViewModel *viewModel; // @dynamic viewModel;

@end

