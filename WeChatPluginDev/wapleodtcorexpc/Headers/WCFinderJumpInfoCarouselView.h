//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMTimer, NSArray, NSMutableArray, NSString, UICollectionView, UIScrollViewAnimator, WCFinderAdCarouselCollectionViewCell, WCFinderCarouselLayout;
@protocol WCFinderJumpInfoCarouselViewDelegate;

@interface WCFinderJumpInfoCarouselView : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoCarouselViewDelegate> _delegate;
    NSArray *_jumpInfoArray;
    FinderJumpInfo_Style *_appearStyle;
    double _maxTextAreaWidth;
    double _maxWidth;
    MMTimer *_timer;
    UICollectionView *_collectionView;
    WCFinderCarouselLayout *_collectionViewLayout;
    WCFinderAdCarouselCollectionViewCell *_topCarouselCell;
    MMTimer *_carouselTimer;
    UIScrollViewAnimator *_scrollViewAnimator;
    NSMutableArray *_carouselCountArray;
    NSMutableArray *_autoCarouselCountArray;
    NSMutableArray *_clickCountArray;
    struct CGRect _targetFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clickCountArray; // @synthesize clickCountArray=_clickCountArray;
@property(retain, nonatomic) NSMutableArray *autoCarouselCountArray; // @synthesize autoCarouselCountArray=_autoCarouselCountArray;
@property(retain, nonatomic) NSMutableArray *carouselCountArray; // @synthesize carouselCountArray=_carouselCountArray;
@property(retain, nonatomic) UIScrollViewAnimator *scrollViewAnimator; // @synthesize scrollViewAnimator=_scrollViewAnimator;
@property(retain, nonatomic) MMTimer *carouselTimer; // @synthesize carouselTimer=_carouselTimer;
@property(nonatomic) __weak WCFinderAdCarouselCollectionViewCell *topCarouselCell; // @synthesize topCarouselCell=_topCarouselCell;
@property(retain, nonatomic) WCFinderCarouselLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxTextAreaWidth; // @synthesize maxTextAreaWidth=_maxTextAreaWidth;
@property(retain, nonatomic) FinderJumpInfo_Style *appearStyle; // @synthesize appearStyle=_appearStyle;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) NSArray *jumpInfoArray; // @synthesize jumpInfoArray=_jumpInfoArray;
@property(nonatomic) __weak id <WCFinderJumpInfoCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *carouselId;
@property(nonatomic) long long topCardIndex;
- (id)topJumpInfoView;
- (long long)manualCarouselCount;
- (long long)autoCarouselCount;
- (id)clickSequence;
- (id)manualCarouselSequence;
- (id)autoCarouselSequence;
- (id)carouselSequence;
- (id)carouselCellAtIndexPath:(id)arg1;
- (void)carouseCollectionViewCell:(id)arg1 switchFromPos:(long long)arg2 toPos:(long long)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 cellWidthAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)clearReportInfo;
- (double)carouselItemWidth;
- (void)resetToCenterIfNeeded;
- (void)scrollToNextCard;
- (void)stopCarousel;
- (void)startCarousel;
- (void)notifyToShow;
- (void)completionForAppearAnimation;
- (void)changeToAppear:(_Bool)arg1 duration:(double)arg2;
- (void)prepareForAppearAnimationFromView:(id)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToShow:(_Bool)arg1;
- (id)jumpInfo;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfoArray:(id)arg1 showPosition:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

