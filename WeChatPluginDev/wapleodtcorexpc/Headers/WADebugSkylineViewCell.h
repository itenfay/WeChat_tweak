//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch, WADebugSkylineOptions;

@interface WADebugSkylineViewCell : UITableViewCell
{
    WADebugSkylineOptions *_options;
    long long _option;
    UISwitch *_switchView;
    UILabel *_labelView;
}

- (void).cxx_destruct;
- (void)onOptionChanged:(id)arg1;
- (void)config:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

