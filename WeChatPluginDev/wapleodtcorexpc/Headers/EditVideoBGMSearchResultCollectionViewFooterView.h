//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, WCTimeLineFooterView;
@protocol EditVideoBGMSearchResultCollectionViewFooterViewDelegate;

@interface EditVideoBGMSearchResultCollectionViewFooterView : UICollectionReusableView
{
    double _heightLimit;
    id <EditVideoBGMSearchResultCollectionViewFooterViewDelegate> _delegate;
    WCTimeLineFooterView *_footerView;
}

+ (double)getViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <EditVideoBGMSearchResultCollectionViewFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double heightLimit; // @synthesize heightLimit=_heightLimit;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)removeClickAction;
- (void)resetStatus:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

