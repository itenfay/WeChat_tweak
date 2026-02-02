//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppWCCardMessageViewModel, MMProgressView, UIImageView, UILabel, UIView;

@interface AppWCCardMessageCellView
{
    MMProgressView *m_progressView;
    UIView *m_progressBkgView;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
    UIImageView *m_thumbImageView;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)updateThumbImage;
- (void)updateStatus;
- (void)initThumbImageView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppWCCardMessageViewModel *viewModel; // @dynamic viewModel;

@end

