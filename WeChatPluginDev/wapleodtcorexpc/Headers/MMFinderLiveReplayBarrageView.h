//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSMutableArray, NSString;
@protocol MMFinderLiveReplayBarrageViewDelegate;

@interface MMFinderLiveReplayBarrageView : UIView
{
    id <MMFinderLiveReplayBarrageViewDelegate> _delegate;
    CADisplayLink *_displayLink;
    NSMutableArray *_trackTailViews;
    NSMutableArray *_commentItems;
    UIView *_selectBgView;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectBgView; // @synthesize selectBgView=_selectBgView;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) NSMutableArray *commentItems; // @synthesize commentItems=_commentItems;
@property(retain, nonatomic) NSMutableArray *trackTailViews; // @synthesize trackTailViews=_trackTailViews;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak id <MMFinderLiveReplayBarrageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMenuControllerDidHide;
- (void)hideOperationMenu;
- (_Bool)isShowingOperationMenu;
- (void)showOperationMenuForView:(id)arg1;
- (void)onReport:(id)arg1;
- (void)didTap:(id)arg1;
- (void)onDisplayLinkFired:(id)arg1;
- (void)addAnimationForView:(id)arg1;
- (void)resumeLayer:(id)arg1;
- (void)pauseLayer:(id)arg1;
- (void)addCommentItems:(id)arg1;
- (void)clear;
- (void)stop;
- (void)pause;
- (void)start;
- (id)labelFont;
- (struct CGSize)labelSizeWithText:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

