//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, NSString, UITableViewCell, UIView, WCFinderComment;

@protocol WCFinderFeedCommentEventDelegate <NSObject>
- (void)onCommentLongPressEmoticonViewWithComment:(WCFinderComment *)arg1 wrap:(CEmoticonWrap *)arg2;
- (void)onCommentClickEmoticonViewWithComment:(WCFinderComment *)arg1 wrap:(CEmoticonWrap *)arg2;
- (void)onCommentClickRecommendList:(WCFinderComment *)arg1;
- (void)onCommentClickRecommend:(WCFinderComment *)arg1 clickUsername:(NSString *)arg2;
- (void)onCommentClickRecommend:(WCFinderComment *)arg1 isSelected:(_Bool)arg2;
- (void)onCommentShowRecommendTips:(WCFinderComment *)arg1 recommendView:(UIView *)arg2;
- (void)onCommentExposeWithComment:(WCFinderComment *)arg1 clickKeyword:(struct WCFinderKeywordAction)arg2;
- (void)onCommentClickWithComment:(WCFinderComment *)arg1 clickKeyword:(struct WCFinderKeywordAction)arg2 forCell:(UITableViewCell *)arg3;
@end

