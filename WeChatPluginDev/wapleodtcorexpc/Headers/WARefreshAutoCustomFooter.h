//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, WARefreshDefaultNoMoreDataLabel;

@interface WARefreshAutoCustomFooter
{
    int _marginTop;
    int _lineWordsInterval;
    WARefreshDefaultNoMoreDataLabel *_noMoreDataView;
    MMUIImageView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WARefreshDefaultNoMoreDataLabel *noMoreDataView; // @synthesize noMoreDataView=_noMoreDataView;
@property(nonatomic) int lineWordsInterval; // @synthesize lineWordsInterval=_lineWordsInterval;
@property(nonatomic) int marginTop; // @synthesize marginTop=_marginTop;
- (void)setState:(long long)arg1;
- (void)updateWords:(id)arg1;
- (void)placeSubviews;
- (void)setupViews;
- (id)init;

@end

