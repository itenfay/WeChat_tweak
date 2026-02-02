//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MMScrollableActionSheetVerticalContainerViewDelegate;

@interface MMScrollableActionSheetVerticalContainerView
{
    double _topPadding;
    double _bottomPadding;
    double _cachedCustomHeaderViewHeight;
    double _cachedCustomFooterViewHeight;
    id <MMScrollableActionSheetVerticalContainerViewDelegate> _delegate;
    NSMutableArray *_rowInfoList;
    NSMutableDictionary *_rowType2RowViewMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *rowType2RowViewMap; // @synthesize rowType2RowViewMap=_rowType2RowViewMap;
@property(retain, nonatomic) NSMutableArray *rowInfoList; // @synthesize rowInfoList=_rowInfoList;
@property(nonatomic) __weak id <MMScrollableActionSheetVerticalContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cachedCustomFooterViewHeight; // @synthesize cachedCustomFooterViewHeight=_cachedCustomFooterViewHeight;
@property(nonatomic) double cachedCustomHeaderViewHeight; // @synthesize cachedCustomHeaderViewHeight=_cachedCustomHeaderViewHeight;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (void)onTappedRowInfo:(id)arg1;
- (double)layoutVerticalRowViews;
- (void)layoutSubviews;
- (void)sortRowInfoList;
- (id)generateRowViewForRowInfo:(id)arg1;
- (long long)getRowInfoIndexWithRowType:(unsigned int)arg1;
- (double)calcuateCustomFooterViewHeight;
- (double)calcuateCustomHeaderViewHeight;
- (void)setNeedRecalcuateCustomHeaderViewHeight;
- (void)addOrUpdateVerticalRowInfo:(id)arg1;
- (void)setVerticalRowInfoList:(id)arg1;
- (void)reset;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

