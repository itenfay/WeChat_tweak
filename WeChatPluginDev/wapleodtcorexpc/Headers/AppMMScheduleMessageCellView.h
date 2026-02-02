//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppMMScheduleMessageViewModel, UIImageView;

@interface AppMMScheduleMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)setHighlighted:(_Bool)arg1;
- (void)jumpScheduleOpWrap:(id)arg1;
- (void)onOPButtonClicked:(id)arg1;
- (void)onClicked;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppMMScheduleMessageViewModel *viewModel; // @dynamic viewModel;

@end

