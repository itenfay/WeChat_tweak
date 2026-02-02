//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollableActionSheetContainerDownStableView, MMScrollableActionSheetContainerUpScrollView, NSString;
@protocol MMScrollableActionSheetContainerViewDelegate;

@interface MMScrollableActionSheetContainerView
{
    double _maxContainerHeight;
    id <MMScrollableActionSheetContainerViewDelegate> _delegate;
    MMScrollableActionSheetContainerUpScrollView *_upScrollView;
    MMScrollableActionSheetContainerDownStableView *_downStableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollableActionSheetContainerDownStableView *downStableView; // @synthesize downStableView=_downStableView;
@property(retain, nonatomic) MMScrollableActionSheetContainerUpScrollView *upScrollView; // @synthesize upScrollView=_upScrollView;
@property(nonatomic) __weak id <MMScrollableActionSheetContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maxContainerHeight; // @synthesize maxContainerHeight=_maxContainerHeight;
- (void)onTappedCancel;
- (void)onTappedItemInfo:(id)arg1;
- (void)downStableViewUpdateGradientLayerOpacity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)reCreateRoundCornersLayer;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1 atRow:(unsigned int)arg2;
- (void)setHorizontalRowInfoList:(id)arg1 atRow:(unsigned int)arg2;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setupDownStableView;
- (void)setupUpScrollView;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

