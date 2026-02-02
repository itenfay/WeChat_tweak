//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMilestoneLotteryInfo, MMFinderLiveMilestoneLotteryViewModel, UILabel, UIScrollView, UIView;

@interface MMFinderLiveMilestoneLotteryQuestionResultView
{
    MMFinderLiveMilestoneLotteryViewModel *_vm;
    FinderLiveMilestoneLotteryInfo *_lotteryInfo;
    UIView *_containerView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm; // @synthesize vm=_vm;
- (void)layoutGradientMask;
- (void)rebuildContentViews;
- (void)layoutSubviews;
- (id)backButtonColor;
- (void)initUI;
- (id)initWithViewModel:(id)arg1 lotteryId:(id)arg2;

@end

