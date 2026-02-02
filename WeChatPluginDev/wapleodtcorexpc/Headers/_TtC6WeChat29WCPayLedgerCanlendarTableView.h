//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC6WeChat29WCPayLedgerCanlendarTableView : UIView
{
    MISSING_TYPE *currentDate;
    MISSING_TYPE *rangeIndicator;
    MISSING_TYPE *tableView;
    MISSING_TYPE *gradientLayer;
    MISSING_TYPE *foregoingMonths;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *dateHeaderTapAction;
    MISSING_TYPE *selectedRangeUpdateAction;
    MISSING_TYPE *selectedRange;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

@end

