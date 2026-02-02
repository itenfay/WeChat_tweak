//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonBoardView, MMFinderLiveSFBarrageCellView, MMFinderLiveTaskId, MMLiveAddBoardView, MMLiveInputToolView;

@interface MMFinderLiveCommentInputEmoticonView : UIView
{
    _Bool _autoLoopAnimation;
    MMLiveInputToolView *_liveInputView;
    EmoticonBoardView *_emoticonBoardView;
    MMLiveAddBoardView *_addBoardView;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderLiveSFBarrageCellView *_barragePreviewView;
    UIView *_barragePreviewDescView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoLoopAnimation; // @synthesize autoLoopAnimation=_autoLoopAnimation;
@property(retain, nonatomic) UIView *barragePreviewDescView; // @synthesize barragePreviewDescView=_barragePreviewDescView;
@property(retain, nonatomic) MMFinderLiveSFBarrageCellView *barragePreviewView; // @synthesize barragePreviewView=_barragePreviewView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) MMLiveAddBoardView *addBoardView; // @synthesize addBoardView=_addBoardView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) MMLiveInputToolView *liveInputView; // @synthesize liveInputView=_liveInputView;
- (_Bool)isCurrentPortrait;
- (void)removeBarrageAnimation;
- (void)runBarrageAnimation;
- (void)delayAnimateBarrageIfNeeded;
- (id)liveCommentInputViewPlaceholder;
- (id)liveTask;
- (void)reloadCurUserHeadImageViewIfNeed;
- (void)reloadData;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutEmoticonBoardView;
- (void)layoutInputView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithLiveTaskId:(id)arg1 frame:(struct CGRect)arg2;

@end

