//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol WCStoryAggregateCommentBubbleViewModelDelegate <NSObject>
- (void)StoryAggregateCommentBubbleViewModelDidAddNewVisitor;
- (void)StoryAggregateCommentBubbleViewModelDidAddNewComment;
- (void)StoryAggregateCommentBubbleViewModelDataDidUpdate:(NSMutableArray *)arg1;
@end

