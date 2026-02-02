//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasFloatActionBtnView
{
    _Bool _isDisappearing;
    _Bool _didAppearFirstTime;
}

@property(nonatomic) _Bool didAppearFirstTime; // @synthesize didAppearFirstTime=_didAppearFirstTime;
@property(nonatomic) _Bool isDisappearing; // @synthesize isDisappearing=_isDisappearing;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setActionViewHidden:(_Bool)arg1 animation:(_Bool)arg2;
- (_Bool)shouldShowActionViewWithOffsetY:(double)arg1 tableHeight:(double)arg2 contentHeight:(double)arg3;
- (id)fetchComponentId;
- (id)initWithFrame:(struct CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

