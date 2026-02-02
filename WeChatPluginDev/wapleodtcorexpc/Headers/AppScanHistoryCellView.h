//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppScanCodeRetryMessageViewModel, UIImageView;

@interface AppScanHistoryCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)setHighlighted:(_Bool)arg1;
- (void)onClicked;
- (void)onOPButtonClicked:(id)arg1;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppScanCodeRetryMessageViewModel *viewModel; // @dynamic viewModel;

@end

