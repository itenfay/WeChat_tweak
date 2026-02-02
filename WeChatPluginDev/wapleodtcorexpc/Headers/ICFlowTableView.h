//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableView.h>

@class ICBatchFetchingContext;
@protocol ICFlowBatchFetchingDelegate;

@interface ICFlowTableView : UITableView
{
    id <ICFlowBatchFetchingDelegate> _batchFetchingDelegate;
    double _leadingScreensForBatching;
    ICBatchFetchingContext *_batchFetchingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICBatchFetchingContext *batchFetchingContext; // @synthesize batchFetchingContext=_batchFetchingContext;
@property(nonatomic) double leadingScreensForBatching; // @synthesize leadingScreensForBatching=_leadingScreensForBatching;
@property(nonatomic) __weak id <ICFlowBatchFetchingDelegate> batchFetchingDelegate; // @synthesize batchFetchingDelegate=_batchFetchingDelegate;
- (void)stopBatchFetching;
- (void)_beginBatchFetching;
- (void)beginBatchFetchingIfNeeded:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)checkForBatchFetching;
- (void)setContentSize:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

