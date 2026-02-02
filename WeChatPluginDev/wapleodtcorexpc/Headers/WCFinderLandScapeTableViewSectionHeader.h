//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface WCFinderLandScapeTableViewSectionHeader : UITableViewHeaderFooterView
{
    UILabel *_headerLabel;
}

+ (id)headerID;
+ (double)headerH;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)setupLayout;
- (void)setup;
- (id)initWithReuseIdentifier:(id)arg1;

@end

