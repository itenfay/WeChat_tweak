//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class WCPayTableCellViewDataView;

@interface WCPayWalletViewCell : UITableViewCell
{
    WCPayTableCellViewDataView *_dataView;
}

- (void).cxx_destruct;
@property(retain) WCPayTableCellViewDataView *dataView; // @synthesize dataView=_dataView;
- (id)getAccessibilityLabelString;
- (void)updateViewData:(id)arg1 RedDot:(id)arg2 delegate:(id)arg3;
- (void)updateDataView;
- (void)layoutSubviews;
- (void)updateLine:(_Bool)arg1;
- (void)updateNumberDelegate:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

