//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppGameShareMessageViewModel;

@interface AppGameShareMessageCellView
{
}

- (id)operationMenuItems;
- (id)urlForPreView:(id)arg1;
- (_Bool)canPeek;
- (void)onTouchUpInside;
- (void)updateStatus;
- (void)addVideoIcon;
- (void)layoutContentView;
- (void)onAppear;

// Remaining properties
@property(readonly, nonatomic) AppGameShareMessageViewModel *viewModel; // @dynamic viewModel;

@end

