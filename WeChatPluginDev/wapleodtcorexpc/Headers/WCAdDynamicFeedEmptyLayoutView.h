//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCAdDynamicFeedBackgroundButton, WCAdDynamicFeedElementInfo;
@protocol WCAdDynamicFeedEmptyLayoutViewDelegate;

@interface WCAdDynamicFeedEmptyLayoutView
{
    _Bool _isLayoutClickable;
    WCAdDynamicFeedElementInfo *_elementInfo;
    id <WCAdDynamicFeedEmptyLayoutViewDelegate> _delegate;
    WCAdDynamicFeedBackgroundButton *_backgroundButton;
    UIView *_highlightedCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightedCoverView; // @synthesize highlightedCoverView=_highlightedCoverView;
@property(retain, nonatomic) WCAdDynamicFeedBackgroundButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <WCAdDynamicFeedEmptyLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCAdDynamicFeedElementInfo *elementInfo; // @synthesize elementInfo=_elementInfo;
@property(nonatomic) _Bool isLayoutClickable; // @synthesize isLayoutClickable=_isLayoutClickable;
- (void)onDynamicFeedBackgroundButtonSetHighlighted:(_Bool)arg1;
- (void)onBackgroundButtonClicked:(id)arg1;
- (void)resetSubViews;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 elementInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

