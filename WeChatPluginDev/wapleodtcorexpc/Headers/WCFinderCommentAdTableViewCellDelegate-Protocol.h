//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIButton, WCDownloadArgsWrap, WCFinderCommentAdTableViewCell, WCFinderJumpInfo, WCPlayerView;

@protocol WCFinderCommentAdTableViewCellDelegate <NSObject>

@optional
- (WCPlayerView *)playerViewWithFrame:(struct CGRect)arg1 ForCommentAdCell:(WCFinderCommentAdTableViewCell *)arg2 argsWrap:(WCDownloadArgsWrap *)arg3;
- (double)maxHeightForCommentView;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickJumpInfo:(WCFinderJumpInfo *)arg2 atSection:(unsigned long long)arg3 clickArea:(unsigned long long)arg4;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickFeedbackButton:(UIButton *)arg2 atSection:(unsigned long long)arg3;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(WCFinderCommentAdTableViewCell *)arg1 clickAvatarAtSection:(unsigned long long)arg2;
@end

