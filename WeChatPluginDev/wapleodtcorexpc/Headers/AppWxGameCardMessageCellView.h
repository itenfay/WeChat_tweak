//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppWxGameCardMessageViewModel, UIView;

@interface AppWxGameCardMessageCellView
{
    UIView *m_sclView;
}

- (void).cxx_destruct;
- (id)operationMenuItems;
- (double)getCellViewInfo;
- (void)showMsgPopupMenu;
- (void)onLongTouch;
- (void)onAppear;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppWxGameCardMessageViewModel *viewModel; // @dynamic viewModel;

@end

