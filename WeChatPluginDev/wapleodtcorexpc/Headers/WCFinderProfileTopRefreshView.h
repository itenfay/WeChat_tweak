//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol WCFinderProfileTopRefreshViewDelegate;

@interface WCFinderProfileTopRefreshView : UIView
{
    _Bool _enable;
    CDUnknownBlockType _refreshBlock;
    long long _state;
    id <WCFinderProfileTopRefreshViewDelegate> _delegate;
}

+ (id)topRefreshViewWithTrigger:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) __weak id <WCFinderProfileTopRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
- (void)didBeginRefresh;
- (void)willBeginRefresh;
- (void)onScrollView:(id)arg1 refreshDistance:(double)arg2;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (double)expectInsetTop;
- (void)updatePollingProgress:(double)arg1;
- (void)endRefreshing;
- (id)initWithFrame:(struct CGRect)arg1;

@end

