//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, WCStoryRefreshFooterView;
@protocol WCStoryCollectionFooterViewDelegate;

@interface WCStoryCollectionFooterView : UICollectionReusableView
{
    id <WCStoryCollectionFooterViewDelegate> _delegate;
    WCStoryRefreshFooterView *_footerView;
}

+ (double)heightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCStoryRefreshFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <WCStoryCollectionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)refreshCollectionViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshCollectionViewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

