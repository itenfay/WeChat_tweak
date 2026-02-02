//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TrueDashLineBoarderView;

@interface KindaDashLineBoarderLineView
{
    TrueDashLineBoarderView *_dashLineBoarderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TrueDashLineBoarderView *dashLineBoarderView; // @synthesize dashLineBoarderView=_dashLineBoarderView;
- (id)getView;
- (float)getCornerRadius;
- (void)setCornerRadius:(float)arg1;
- (id)getDashColor;
- (void)setDashColor:(id)arg1;
- (float)getDashWidth;
- (void)setDashWidth:(float)arg1;
- (void)setFocusableInTouchMode:(_Bool)arg1;
- (void)removeAllViews;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1 position:(int)arg2;
- (void)addView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

