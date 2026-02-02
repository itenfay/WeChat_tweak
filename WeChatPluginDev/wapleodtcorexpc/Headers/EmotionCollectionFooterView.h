//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class EmoticonStoreFootView, NSString;
@protocol EmotionCollectionFooterViewDelegate;

@interface EmotionCollectionFooterView : UICollectionReusableView
{
    EmoticonStoreFootView *_footerView;
    id <EmotionCollectionFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmotionCollectionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)refreshCollectionViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshCollectionViewDidScroll:(id)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

