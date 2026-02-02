//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveQuickReplyModel, MMFinderLiveSFBarrageCellView, MMTimer, RichTextView, UIView;

@interface MMFinderLiveQuickReplyCell : UICollectionViewCell
{
    MMFinderLiveQuickReplyModel *_model;
    UIView *_selectView;
    RichTextView *_commentTextView;
    MMFinderLiveSFBarrageCellView *_barrageCellView;
    RichTextView *_barrageDescTextView;
    MMTimer *_countdownTimer;
}

+ (struct CGSize)caculateWithModel:(id)arg1;
+ (double)cellHeightWithModel:(id)arg1;
+ (double)cellWidthWithModel:(id)arg1 defaultWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) RichTextView *barrageDescTextView; // @synthesize barrageDescTextView=_barrageDescTextView;
@property(retain, nonatomic) MMFinderLiveSFBarrageCellView *barrageCellView; // @synthesize barrageCellView=_barrageCellView;
@property(retain, nonatomic) RichTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) MMFinderLiveQuickReplyModel *model; // @synthesize model=_model;
- (id)getBarrageAccessibility;
- (void)reloadBarrageDescTextForStayTime;
- (void)onTimerFired:(id)arg1;
- (void)schedulCountdownTimerIfNeeded;
- (void)invalidateCountdownTimer;
- (void)layoutUI;
- (void)initUI;
- (void)updateBarrageCellViewWithCommentItem:(id)arg1;
- (void)layoutSubviews;
- (void)changeCellBackGroundColor:(_Bool)arg1;
- (id)accessibilityLabel;
- (void)showBorder:(_Bool)arg1;
- (void)onVisibilityChanged:(_Bool)arg1;
- (void)updateModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

