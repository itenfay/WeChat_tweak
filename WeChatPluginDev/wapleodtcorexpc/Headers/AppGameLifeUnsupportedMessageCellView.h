//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppGameLifeUnsupportedMessageViewModel;

@interface AppGameLifeUnsupportedMessageCellView
{
}

- (id)operationMenuItems;
- (_Bool)canShowRevokeMsgMenuItem;
- (_Bool)touchIntoSelectCopyState;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)canBeReused;

// Remaining properties
@property(readonly, nonatomic) AppGameLifeUnsupportedMessageViewModel *viewModel; // @dynamic viewModel;

@end

