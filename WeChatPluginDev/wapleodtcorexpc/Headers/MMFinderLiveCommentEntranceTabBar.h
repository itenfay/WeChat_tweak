//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveBoxId, MMFinderLiveCommentEntranceView, MMFinderLiveTaskId, NSMutableArray, UIScrollView;

@interface MMFinderLiveCommentEntranceTabBar : UIView
{
    CDUnknownBlockType _commentEntranceDidTapToChangeCallback;
    CDUnknownBlockType _commentEntranceSelectedChangeCallback;
    MMFinderLiveTaskId *_liveTaskId;
    UIScrollView *_entranceScrollView;
    NSMutableArray *_entranceViewList;
    FinderLiveBoxId *_currSelectBox;
    MMFinderLiveCommentEntranceView *_currSelectEntranceView;
    double _maxWidth;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak MMFinderLiveCommentEntranceView *currSelectEntranceView; // @synthesize currSelectEntranceView=_currSelectEntranceView;
@property(retain, nonatomic) FinderLiveBoxId *currSelectBox; // @synthesize currSelectBox=_currSelectBox;
@property(retain, nonatomic) NSMutableArray *entranceViewList; // @synthesize entranceViewList=_entranceViewList;
@property(retain, nonatomic) UIScrollView *entranceScrollView; // @synthesize entranceScrollView=_entranceScrollView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType commentEntranceSelectedChangeCallback; // @synthesize commentEntranceSelectedChangeCallback=_commentEntranceSelectedChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType commentEntranceDidTapToChangeCallback; // @synthesize commentEntranceDidTapToChangeCallback=_commentEntranceDidTapToChangeCallback;
- (void)reportGroupNameLabelExpose:(id)arg1;
- (void)reportGroupNameLabelClick:(id)arg1;
- (void)clearRedDotForEntrance:(id)arg1;
- (void)updateRedDot:(id)arg1;
- (void)updateCurrSelectBox:(id)arg1;
- (void)updateMaxWidth:(double)arg1;
- (void)removeBoxEntrance:(id)arg1;
- (void)addBoxEntrance:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateSelectEntranceView:(id)arg1;
- (void)adjustContentOffsetForCurrSelectBoxIfNeed;
- (id)getFinderLiveTask;
- (void)refreshUIForCurrentSelectBoxChanged;
- (double)getEntrancesSumContentWidth;
- (void)updateEntranceScrollContentSize;
- (void)updateSelfSize;
- (void)refreshEntranceViewUI;
- (id)getEntranceViewWithBoxId:(id)arg1;
- (void)onEntranceViewListChanged;
- (id)createEntranceView:(id)arg1;
- (void)layoutEntranceScrollView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initDefaultDatas;
- (id)initWithLiveTaskId:(id)arg1;

@end

