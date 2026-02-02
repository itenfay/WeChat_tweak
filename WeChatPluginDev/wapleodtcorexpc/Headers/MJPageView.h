//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPageViewConfig, MJPageViewContentView, MJPageViewLayout, MJPageViewTitleView, NSString;
@protocol MJPageViewDataSource, MJPageViewDelegate;

@interface MJPageView
{
    id <MJPageViewDelegate> _delegate;
    id <MJPageViewDataSource> _dataSource;
    MJPageViewTitleView *_titleView;
    MJPageViewContentView *_contentView;
    long long _selectedIndex;
    long long _pageCount;
    MJPageViewLayout *_layout;
    MJPageViewConfig *_config;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MJPageViewConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) MJPageViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) MJPageViewContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MJPageViewTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <MJPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MJPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contentViewDidScrolled:(double)arg1;
- (void)item:(id)arg1 changeSelectedToIndex:(long long)arg2 animated:(_Bool)arg3;
- (id)pageView;
- (long long)visiblePageIndex;
- (void)invalidateLayout;
- (void)scrollToPageAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)clear;
- (void)reloadData;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

