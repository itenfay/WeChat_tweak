//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryBubbleHeadView;

@protocol WCStoryBubbleHeadViewDelegate <NSObject>

@optional
- (void)storyBubbleHeadViewClickCommentView:(WCStoryBubbleHeadView *)arg1;
- (void)WCStoryBubbleHeadViewBlurEffectViewDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewReplyBtnDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewDeleteBtnDidCancel:(id)arg1;
- (void)WCStoryBubbleHeadViewDeleteBtnDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewHeadImageDidDoubleClick:(id)arg1;
- (void)WCStoryBubbleHeadViewHeadImageDidClick:(id)arg1;
@end

