//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMFinderLiveRealNameFriendLikeBubbleView
{
    _Bool _isLiked;
    CDUnknownBlockType _likeAction;
    CDUnknownBlockType _closeAction;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType likeAction; // @synthesize likeAction=_likeAction;
- (void)onActionTapped;
- (void)updateTitleLabel;
- (void)updateActionButton;
- (void)updateLiked:(_Bool)arg1;
- (void)onCloseTapped;
- (id)initWithTaskId:(id)arg1 closeAction:(CDUnknownBlockType)arg2 likeAction:(CDUnknownBlockType)arg3;

@end

