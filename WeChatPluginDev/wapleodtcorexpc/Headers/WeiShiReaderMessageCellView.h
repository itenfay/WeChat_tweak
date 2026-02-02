//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WeShiReaderItemView, WeiShiReaderMessageViewModel;

@interface WeiShiReaderMessageCellView
{
    WeShiReaderItemView *itemView;
}

- (void).cxx_destruct;
- (void)doWeishiRepor:(unsigned int)arg1 topNewsTitle:(id)arg2 readerWrap:(id)arg3;
- (void)onAppear;
- (void)onMoreMenu:(id)arg1;
- (void)onForwardMenu:(id)arg1;
- (void)onFavoriteMenu:(id)arg1;
- (id)getMenuItems;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(id)arg2;
- (id)getWebViewController:(id)arg1 url:(id)arg2;
- (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (id)getCurrentViewController;
- (_Bool)canCellShowOperationMenu;
- (_Bool)canPeek;
- (id)getReadWraps;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)bShouldReportShowInfo;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WeiShiReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

