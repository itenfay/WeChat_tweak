//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UIView, WCTimeLineFooterView;
@protocol RingBackAddToTingSheetViewDelegate;

@interface RingBackAddToTingSheetView
{
    id <RingBackAddToTingSheetViewDelegate> _delegate;
    UIView *_contentView;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    NSMutableArray *_tingInfoArray;
    unsigned long long _ringCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long ringCount; // @synthesize ringCount=_ringCount;
@property(retain, nonatomic) NSMutableArray *tingInfoArray; // @synthesize tingInfoArray=_tingInfoArray;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <RingBackAddToTingSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickAddButton:(id)arg1;
- (void)clickCloseButton:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)updateDataWithRings:(id)arg1;
- (void)resetData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

