//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, UIView;

@interface WAForceReloadLoadingWindowVC
{
    UIView *_backView;
    MMLoadingView *_loadingView;
    _Bool _needLoading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needLoading; // @synthesize needLoading=_needLoading;
- (void)hideWithAnimated:(int)arg1;
- (void)delayHide:(id)arg1;
- (void)getCurrentScreenShot;
- (void)viewDidLoad;
- (id)init;

@end

