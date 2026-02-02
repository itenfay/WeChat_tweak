//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView;

@interface WCShareCardListRefreshHeader
{
    double _insetTDelta;
    MMUIActivityIndicatorView *_loadingView;
}

+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double insetTDelta; // @synthesize insetTDelta=_insetTDelta;
- (void)setPullingPercent:(double)arg1;
- (void)endRefreshing;
- (void)setState:(long long)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

