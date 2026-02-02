//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandEcsPrivateMsgViewModel, MMBrandHeadImageView, UILabel;

@interface BrandEcsPrivateMsgCellView
{
    MMBrandHeadImageView *m_headerView;
    UILabel *m_digestLabel;
    UILabel *m_checkLabel;
}

- (void).cxx_destruct;
- (void)report32229:(_Bool)arg1;
- (void)onAppear;
- (void)layoutDigestLabel;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)onTouchUpInside;
- (void)layoutInternal;
- (_Bool)canShowMoreMenuItem;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) BrandEcsPrivateMsgViewModel *viewModel; // @dynamic viewModel;

@end

