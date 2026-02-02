//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageTextReaderMessageViewModel, UIImageView;

@interface ImageTextReaderMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (id)operationMenuItems;
- (void)addFavorite;
- (void)forwardMessage;
- (void)jumpOpItem:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)onClicked;
- (void)onOPButtonClicked:(id)arg1;
- (void)onHeadImageClick;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)layoutContentView;
- (void)onAppear;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) ImageTextReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

