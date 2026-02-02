//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderContentTableViewCellDelegate-Protocol.h"

@class UIView, WCFinderFeedContentVM;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderContentHeaderViewDelegate <WCFinderContentTableViewCellDelegate>

@optional
- (void)headerViewHeatUpComplection:(WCFinderFeedContentVM *)arg1;
- (void)headerViewShowkeyboard:(WCFinderFeedContentVM *)arg1;
- (void)headerViewShowActionSheet:(WCFinderFeedContentVM *)arg1;
- (void)onClickOriginalStatement:(WCFinderFeedContentVM *)arg1;
- (void)onClickMoreAction:(WCFinderFeedContentVM *)arg1;
- (void)onClickCollectionAction:(WCFinderFeedContentVM *)arg1;
- (void)headerViewExpandText:(_Bool)arg1;
- (void)headerViewShowStateChanged:(_Bool)arg1;
- (void)onFinderJumpInfoViewDidClick:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoViewDidClick:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (void)onClickUserHeadNickname:(WCFinderFeedContentVM *)arg1;
- (void)onClickUserHeadAvatar:(WCFinderFeedContentVM *)arg1;
@end

