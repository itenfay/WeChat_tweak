//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCSplitDetailNavigationController
{
    _Bool _isPresented;
    _Bool _isViewDisappear;
    _Bool _isSizeChanged;
    struct CGSize _lastViewSize;
}

@property(nonatomic) _Bool isSizeChanged; // @synthesize isSizeChanged=_isSizeChanged;
@property(nonatomic) struct CGSize lastViewSize; // @synthesize lastViewSize=_lastViewSize;
@property(nonatomic) _Bool isViewDisappear; // @synthesize isViewDisappear=_isViewDisappear;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)isBeingPresented;
- (id)initWithRootViewController:(id)arg1 isBeingPresent:(_Bool)arg2;

@end

