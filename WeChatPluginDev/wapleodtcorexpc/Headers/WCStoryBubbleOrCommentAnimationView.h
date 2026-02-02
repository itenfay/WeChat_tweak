//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSSet, NSString;
@protocol WCStoryBubbleOrCommentAnimationViewDelegate;

@interface WCStoryBubbleOrCommentAnimationView : UIView
{
    _Bool _isBubble;
    _Bool _isFirstTimeShow;
    _Bool _isInBackground;
    id <WCStoryBubbleOrCommentAnimationViewDelegate> _delegate;
    NSArray *_itemList;
    UIView *_movingView;
    long long _displayItemIndex;
    NSSet *_unreadCommentIdSet;
    double _itemMoveingVelocity;
}

- (void).cxx_destruct;
@property(nonatomic) double itemMoveingVelocity; // @synthesize itemMoveingVelocity=_itemMoveingVelocity;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(retain, nonatomic) NSSet *unreadCommentIdSet; // @synthesize unreadCommentIdSet=_unreadCommentIdSet;
@property(nonatomic) long long displayItemIndex; // @synthesize displayItemIndex=_displayItemIndex;
@property(retain, nonatomic) UIView *movingView; // @synthesize movingView=_movingView;
@property(nonatomic) _Bool isFirstTimeShow; // @synthesize isFirstTimeShow=_isFirstTimeShow;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(nonatomic) _Bool isBubble; // @synthesize isBubble=_isBubble;
@property(nonatomic) __weak id <WCStoryBubbleOrCommentAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyBubbleHeadViewClickCommentView:(id)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)showSingleHeadView:(id)arg1;
- (void)showItems;
@property(nonatomic) _Bool movingViewHidden; // @dynamic movingViewHidden;
- (void)stopAnimations;
- (double)getNextIntervalForCurrentIndex:(unsigned long long)arg1;
- (void)showItemList:(id)arg1 unreadCommentIdSet:(id)arg2;
- (double)animationTimeInAll;
- (double)disppearAnimationTime;
- (double)disppearAnimationDelayTime;
- (double)wordExtendAnimationTime;
- (double)wordExtendAnimationDelayTime;
- (double)movingAnimationTime;
- (double)movingAnimationDelayTime;
- (double)blurEffectExtendAnimationTime;
- (double)blurEffectExtendAnimationDelayTime;
- (double)appearAnimationTime;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

