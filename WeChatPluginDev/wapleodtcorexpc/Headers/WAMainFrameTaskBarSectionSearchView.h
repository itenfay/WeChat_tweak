//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WAMainFrameTaskBarSearchBar;
@protocol WAMainFrameTaskBarSectionSearchViewDelegate;

@interface WAMainFrameTaskBarSectionSearchView
{
    UIView *_searchArea;
    WAMainFrameTaskBarSearchBar *_searchBar;
    id <WAMainFrameTaskBarSectionSearchViewDelegate> _delegate;
}

+ (long long)contentHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)refreshSearchPlaceHolder:(id)arg1;
- (void)layoutSubviews;
- (void)onTapSearchArea;
- (void)initView;

@end

