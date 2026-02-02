//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIImageView;
@protocol GameLifeLoadingViewDelegate;

@interface GameLifeLoadingView
{
    UIImageView *_loadingImageView;
    MMUILabel *_loadingTextLabel;
    id <GameLifeLoadingViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GameLifeLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleRetryTap:(id)arg1;
- (void)onLoadingError;
- (void)startLoading;
- (void)relayout;
- (void)layoutSubviews;
- (void)endLoadingAnimation;
- (void)beginLoadingAnimation;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)gcEndLoading;
- (void)gcBeginLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

