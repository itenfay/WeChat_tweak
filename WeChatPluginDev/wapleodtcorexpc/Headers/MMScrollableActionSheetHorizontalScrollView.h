//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSString;
@protocol MMScrollableActionSheetHorizontalScrollViewDelegate;

@interface MMScrollableActionSheetHorizontalScrollView : UIScrollView
{
    NSMutableArray *_itemInfoList;
    double _topPadding;
    double _bottomPadding;
    id <MMScrollableActionSheetHorizontalScrollViewDelegate> _actionSheetDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMScrollableActionSheetHorizontalScrollViewDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) NSMutableArray *itemInfoList; // @synthesize itemInfoList=_itemInfoList;
- (void)onTappedItemInfo:(id)arg1;
- (void)layoutSubviews;
- (void)updateItemViewMap;
- (void)sortItemInfoList;
- (id)generateItemViewForItemInfo:(id)arg1;
- (long long)getItemInfoIndexWithItemType:(unsigned int)arg1;
- (double)calcuateScrollViewHeight;
- (double)calcuateMaxItemHeight;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1;
- (void)setHorizontalRowInfoList:(id)arg1;
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

