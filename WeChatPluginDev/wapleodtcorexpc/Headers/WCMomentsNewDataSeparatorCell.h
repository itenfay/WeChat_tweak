//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, WCMomentsFinderRecommendationButton, WCMomentsNewDataSeparatorViewModel;
@protocol WCMomentsNewDataSeparatorCellDelegate;

@interface WCMomentsNewDataSeparatorCell
{
    struct CGSize _lastLayoutedSize;
    id <WCMomentsNewDataSeparatorCellDelegate> _delegate;
    WCMomentsNewDataSeparatorViewModel *_viewModel;
    MMUILabel *_tipsLabel;
    WCMomentsFinderRecommendationButton *_finderRecommendationButton;
}

+ (id)createTipsLabel;
+ (double)heightForWidth:(double)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsFinderRecommendationButton *finderRecommendationButton; // @synthesize finderRecommendationButton=_finderRecommendationButton;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCMomentsNewDataSeparatorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCMomentsNewDataSeparatorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)finderRecommendationButtonDidClick:(id)arg1;
- (void)reloadFinderRecommendationButton;
- (void)reloadTipsLabel;
- (void)updateSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

