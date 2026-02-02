//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, WCTimeLineFooterView;
@protocol WCVideoProducerLoadMoreViewDelegate;

@interface WCVideoProducerLoadMoreView : UICollectionViewCell
{
    id <WCVideoProducerLoadMoreViewDelegate> _delegate;
    NSString *_normalStateText;
    NSString *_errorStateText;
    NSString *_loadingStateText;
    NSString *_noDataStateText;
    NSString *_noMoreDataStateText;
    double _loadMoreThresholdOffset;
    WCTimeLineFooterView *_loadMoreFooterView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineFooterView *loadMoreFooterView; // @synthesize loadMoreFooterView=_loadMoreFooterView;
@property(nonatomic) double loadMoreThresholdOffset; // @synthesize loadMoreThresholdOffset=_loadMoreThresholdOffset;
@property(copy, nonatomic) NSString *noMoreDataStateText; // @synthesize noMoreDataStateText=_noMoreDataStateText;
@property(copy, nonatomic) NSString *noDataStateText; // @synthesize noDataStateText=_noDataStateText;
@property(copy, nonatomic) NSString *loadingStateText; // @synthesize loadingStateText=_loadingStateText;
@property(copy, nonatomic) NSString *errorStateText; // @synthesize errorStateText=_errorStateText;
@property(copy, nonatomic) NSString *normalStateText; // @synthesize normalStateText=_normalStateText;
@property(nonatomic) __weak id <WCVideoProducerLoadMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateloadMoreThresholdOffset:(double)arg1;
- (unsigned long long)currentState;
- (void)updatePullRefreshState:(unsigned long long)arg1 isError:(_Bool)arg2;
- (void)updateForScrolling:(id)arg1;
- (void)updateForFooterOffset:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)loadViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

