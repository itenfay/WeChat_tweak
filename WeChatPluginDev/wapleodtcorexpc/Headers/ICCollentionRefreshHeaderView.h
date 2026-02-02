//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView;
@protocol ICCollentionRefreshHeaderViewDelegate;

@interface ICCollentionRefreshHeaderView : UIView
{
    long long _state;
    id <ICCollentionRefreshHeaderViewDelegate> _delegate;
    MMUIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <ICCollentionRefreshHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)icRefreshScrollViewTrigerAutoRefresh:(id)arg1;
- (void)icRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)icRefreshScrollViewDidEndDragging:(id)arg1;
- (void)icRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

