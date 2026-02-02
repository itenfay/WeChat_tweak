//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryComment;

@protocol WCStoryCommentsForSelfTableViewCellDelegate <NSObject>

@optional
- (void)StoryCommentsCellDidClickReplyBtn:(id)arg1;
- (void)StoryCommentsCellDidClickBlurEffectView:(id)arg1;
- (void)StoryCommentCellDidTapDeleteButtonAndCancel:(WCStoryComment *)arg1;
- (void)StoryCommentCellDidTapDeleteButton:(WCStoryComment *)arg1;
- (void)StoryCommentsCellDidDoubleClickHeadImageView:(id)arg1;
- (void)StoryCommentsCellDidClickHeadImageView:(id)arg1;
@end

