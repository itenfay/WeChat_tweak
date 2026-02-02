//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCStoryBubbleHeadView, WCStoryComment, WCStoryDataItem;
@protocol WCStoryCommentsForSelfTableViewCellDelegate;

@interface WCStoryCommentsForSelfTableViewCell
{
    id <WCStoryCommentsForSelfTableViewCellDelegate> _delegate;
    WCStoryComment *_comment;
    WCStoryDataItem *_dataItem;
    WCStoryBubbleHeadView *_storyBubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryBubbleHeadView *storyBubbleView; // @synthesize storyBubbleView=_storyBubbleView;
@property(retain, nonatomic) WCStoryDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCStoryComment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCStoryCommentsForSelfTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCStoryBubbleHeadViewReplyBtnDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewDeleteBtnDidCancel:(id)arg1;
- (void)WCStoryBubbleHeadViewDeleteBtnDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewBlurEffectViewDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewHeadImageDidDoubleClick:(id)arg1;
- (void)WCStoryBubbleHeadViewHeadImageDidClick:(id)arg1;
- (void)setRightFunctionalBtnHidden:(_Bool)arg1;
- (void)updateVoiceOverState;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

