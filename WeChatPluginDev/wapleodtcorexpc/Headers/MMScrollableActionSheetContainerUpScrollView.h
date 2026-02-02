//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSMutableDictionary, NSString, UIView;
@protocol MMScrollableActionSheetContainerUpScrollViewDelegate, MMScrollableActionSheetCustomFooterViewInterface, MMScrollableActionSheetCustomHeaderViewInterface;

@interface MMScrollableActionSheetContainerUpScrollView : UIScrollView
{
    double _cachedUpScrollViewContentHeight;
    id <MMScrollableActionSheetContainerUpScrollViewDelegate> _actionSheetDelegate;
    UIView<MMScrollableActionSheetCustomHeaderViewInterface> *_customHeaderView;
    UIView<MMScrollableActionSheetCustomFooterViewInterface> *_customFooterView;
    NSMutableArray *_horizontalScrollViewList;
    NSMutableDictionary *_seperatorViewMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *seperatorViewMap; // @synthesize seperatorViewMap=_seperatorViewMap;
@property(retain, nonatomic) NSMutableArray *horizontalScrollViewList; // @synthesize horizontalScrollViewList=_horizontalScrollViewList;
@property(retain, nonatomic) UIView<MMScrollableActionSheetCustomFooterViewInterface> *customFooterView; // @synthesize customFooterView=_customFooterView;
@property(retain, nonatomic) UIView<MMScrollableActionSheetCustomHeaderViewInterface> *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(nonatomic) __weak id <MMScrollableActionSheetContainerUpScrollViewDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property(nonatomic) double cachedUpScrollViewContentHeight; // @synthesize cachedUpScrollViewContentHeight=_cachedUpScrollViewContentHeight;
- (void)onTappedItemInfo:(id)arg1;
- (double)layoutCustomHeaderViewAndHorizontalScrollViewsAndFooterView;
- (void)layoutSubviews;
- (void)setSeperatorViewY:(double)arg1 atRow:(long long)arg2;
- (void)allSeperatorViewsRemoveFromSuperview;
- (id)getOrCreateHorizontalScrollViewAndSeperatorViewAtRow:(unsigned int)arg1;
- (double)calcuteUpScrollViewContentHeight;
- (void)setNeedRecalcuateUpScrollViewContentHeight;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1 atRow:(unsigned int)arg2;
- (void)setHorizontalRowInfoList:(id)arg1 atRow:(unsigned int)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

