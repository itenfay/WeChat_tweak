//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, NSString, UITableView, UITableViewCell;
@protocol WCAddressTableViewDelegate;

@interface WCAddressPickerCollectionCell : UICollectionViewCell
{
    id <WCAddressTableViewDelegate> m_delegate;
    NSString *m_selectedString;
    double m_pickerGroupHeight;
    double m_topBarCellHeight;
    UITableViewCell *m_defaultTopCell;
    UITableView *_tableView;
    NSMutableArray *_stageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stageData; // @synthesize stageData=_stageData;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)jumpToSelectRow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)defaultTopCell;
- (void)setTopBarHeight:(double)arg1 andBtnViewHeight:(double)arg2;
- (void)setSelectedString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

