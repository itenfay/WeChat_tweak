//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol MMLoadMoreTableViewDelegate;

@interface MMLoadMoreTableView
{
    struct UIEdgeInsets _insetsBefore;
    _Bool _disableLoadMore;
    float _startLoadingAnimationDuration;
    float _stopLoadingAnimationDuration;
    id <MMLoadMoreTableViewDelegate> _loadMoreDelegate;
    UIView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) float stopLoadingAnimationDuration; // @synthesize stopLoadingAnimationDuration=_stopLoadingAnimationDuration;
@property(nonatomic) float startLoadingAnimationDuration; // @synthesize startLoadingAnimationDuration=_startLoadingAnimationDuration;
@property(nonatomic) _Bool disableLoadMore; // @synthesize disableLoadMore=_disableLoadMore;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <MMLoadMoreTableViewDelegate> loadMoreDelegate; // @synthesize loadMoreDelegate=_loadMoreDelegate;
- (void)onLoadDone;
- (void)startLoadMore;
- (void)onScrollViewWillBeginDecelerating;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

