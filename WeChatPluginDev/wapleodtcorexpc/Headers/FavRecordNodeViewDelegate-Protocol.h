//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavImagePreView, FavRecordBaseNodeView, FavRecordImgNodeView, FavoritesItemDataField, MMMsgMenuReporter, MMRichTextCoverView, MMUIViewController, MsgRecordBaseNodeView, NSString, UIImageView, UITableView;
@protocol RecordNodeDataSource;

@protocol FavRecordNodeViewDelegate <NSObject>

@optional
- (void)onClickReferViewInNodeView:(FavRecordBaseNodeView *)arg1;
- (_Bool)tryHandleMenu:(long long)arg1 withDataSource:(id <RecordNodeDataSource>)arg2;
- (void)onClickWeAppMPShortLinkWithUrl:(NSString *)arg1 withFavData:(FavoritesItemDataField *)arg2;
- (void)onClickSearchTopicWithUrl:(NSString *)arg1 withFavData:(FavoritesItemDataField *)arg2;
- (_Bool)shouldShowTopicText;
- (void)onFavViewSizeDidChange:(FavRecordBaseNodeView *)arg1 withFavData:(FavoritesItemDataField *)arg2;
- (void)onWillLongPressImgNode:(FavImagePreView *)arg1 imageView:(UIImageView *)arg2;
- (void)onLongPressImgNode:(id <RecordNodeDataSource>)arg1;
- (void)onClickOnImgNode:(MsgRecordBaseNodeView *)arg1 needEdit:(_Bool)arg2;
- (void)onClickOnImgNode:(FavRecordImgNodeView *)arg1 DataIndex:(unsigned int)arg2;
- (void)favRecordNodeView:(FavRecordBaseNodeView *)arg1 onClickOnNode:(id <RecordNodeDataSource>)arg2;
- (void)setRichTextCoverView:(MMRichTextCoverView *)arg1;
- (MMRichTextCoverView *)getRichTextCoverView;
- (MMMsgMenuReporter *)getMMMsgMenuReporter;
- (MMUIViewController *)getViewController;
- (UITableView *)getTableView;
@end

