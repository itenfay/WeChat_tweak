//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol MMHorizontalTableViewDataSource, MMHorizontalTableViewDelegate;

@interface MMHorizontalTableView : UIScrollView
{
    NSMutableSet *recycledCells;
    NSMutableSet *visibleCells;
    NSMutableArray *originPointList;
    id <MMHorizontalTableViewDelegate> viewDelegate;
    id <MMHorizontalTableViewDataSource> dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMHorizontalTableViewDataSource> dataSource; // @synthesize dataSource;
@property(nonatomic) __weak id <MMHorizontalTableViewDelegate> viewDelegate; // @synthesize viewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isDisplayingCellForIndex:(unsigned long long)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)tileView;
- (void)calculateAllCellOrigin;
- (float)contentSizeWidth;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

