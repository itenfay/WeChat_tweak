//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol GCLoadMoreProtocol, GCLoadingViewProtocol;

@interface GCLoadingMoreCellModel
{
    _Bool _isLoading;
    id <GCLoadMoreProtocol> _loadMoreDelegate;
    UIView<GCLoadingViewProtocol> *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIView<GCLoadingViewProtocol> *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <GCLoadMoreProtocol> loadMoreDelegate; // @synthesize loadMoreDelegate=_loadMoreDelegate;
- (void)endLoading;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithLoadingView:(id)arg1;

@end

