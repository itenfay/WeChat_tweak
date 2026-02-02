//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString;
@protocol WSSimilarEmotCellDelegate;

@interface WSSimilarEmotCell
{
    id <WSSimilarEmotCellDelegate> _delegate;
    unsigned long long _startIndex;
    NSMutableArray *_itemViewList;
    NSArray *_itemModels;
}

+ (long long)itemCountPerLine:(double)arg1;
+ (double)itemGapPerLine:(double)arg1;
+ (double)itemWidthWithCellWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *itemModels; // @synthesize itemModels=_itemModels;
@property(retain, nonatomic) NSMutableArray *itemViewList; // @synthesize itemViewList=_itemViewList;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) __weak id <WSSimilarEmotCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleItemLongPress:(id)arg1 model:(id)arg2;
- (void)handleItemClick:(id)arg1 model:(id)arg2;
- (void)layoutSubviews;
- (void)configSimilarItems:(id)arg1 itemViewWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

