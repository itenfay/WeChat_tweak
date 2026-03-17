//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class IntelligentMsgBrowseView, MsgImageSquareThumbView, NSArray, NSMutableSet, SimpleImgInfo, WCDataSearcher, WCSearcher;

@protocol IntelligentMsgBrowseViewDelegate <MMUIViewControllerDelegate>
- (void)setIsShowSearcherResultTableViewFlag:(_Bool)arg1;
- (void)reLoadInitData;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (NSArray *)messageWrapsForIntelligentMsgBrowseView:(IntelligentMsgBrowseView *)arg1;

@optional
- (unsigned int)getCategoryDisplayType;
- (WCDataSearcher *)getIntelligentMsgSearcher;
- (void)resetTableTopView;
- (void)wcsIntelligentMsgBrowseViewDismissSearch:(WCSearcher *)arg1;
- (void)wcsIntelligentMsgBrowseViewDidPresentSearch:(WCSearcher *)arg1;
- (NSMutableSet *)expiredMsgForIntelligentMsgBrowseView:(IntelligentMsgBrowseView *)arg1;
- (void)onIntelligentMsgBrowseViewGetMoreMsg:(IntelligentMsgBrowseView *)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (void)onSquareImgLongClicked:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2;
- (void)onSquareImgClicked:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2 withOffset:(unsigned int)arg3;
- (void)onSquareImgCreated:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2;
- (void)intelligentMsgBrowseView:(IntelligentMsgBrowseView *)arg1 didChangeCheckMarkTo:(_Bool)arg2 atSection:(unsigned long long)arg3;
- (_Bool)intelligentMsgBrowseView:(IntelligentMsgBrowseView *)arg1 willChangeCheckMarkTo:(_Bool)arg2 atSection:(unsigned long long)arg3;
- (void)intelligentMsgBrowseView:(IntelligentMsgBrowseView *)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(SimpleImgInfo *)arg3;
- (_Bool)intelligentMsgBrowseView:(IntelligentMsgBrowseView *)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(SimpleImgInfo *)arg3;
@end

