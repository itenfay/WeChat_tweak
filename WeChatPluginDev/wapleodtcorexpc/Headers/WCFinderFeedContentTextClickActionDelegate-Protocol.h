//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentTextView;

@protocol WCFinderFeedContentTextClickActionDelegate <NSObject>

@optional
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickKeywordUrl:(NSString *)arg2;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickEventTopicId:(unsigned long long)arg2;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickReadMore:(_Bool)arg2 isTouchExpand:(_Bool)arg3;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickContentUserName:(NSString *)arg2;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickMentionUsername:(NSString *)arg2 nickname:(NSString *)arg3;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickReplyUsername:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickSubCommentWeChat:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickSubComment:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickTopicText:(NSString *)arg2;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 longPressedText:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickText:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(WCFinderFeedContentTextView *)arg1 clickReadMore:(_Bool)arg2;
@end

