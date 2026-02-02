//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppNoteMessageViewModel, UILabel;

@interface AppNoteMessageCellView
{
    UILabel *m_titleLabel;
    UILabel *m_contentLabel;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (_Bool)canShowFavoriteMenuItem;
- (id)getDisplayImgDatas:(id)arg1;
- (void)layoutSubviewsOnlyText:(id)arg1 currentHeight:(double)arg2;
- (void)layoutSubviewsImgs:(id)arg1 currentHeight:(double)arg2;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppNoteMessageViewModel *viewModel; // @dynamic viewModel;

@end

