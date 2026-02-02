//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMUILabel, NSString;

@interface WCFinderNotifyCenterSectionHeaderView : UITableViewHeaderFooterView
{
    NSString *_title;
    MMUILabel *_titleLabel;
}

+ (double)descriptionTableViewCellHeight:(unsigned long long)arg1;
+ (double)descriptionTableViewCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateTitle:(id)arg1 style:(unsigned long long)arg2;
- (void)setupUI;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

