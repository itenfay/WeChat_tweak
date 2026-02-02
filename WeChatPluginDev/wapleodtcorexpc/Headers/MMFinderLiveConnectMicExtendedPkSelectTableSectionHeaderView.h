//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UILabel;

@interface MMFinderLiveConnectMicExtendedPkSelectTableSectionHeaderView : UITableViewHeaderFooterView
{
    UILabel *_titleLabel;
}

+ (id)reuseId;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *title;
- (id)initWithReuseIdentifier:(id)arg1;

@end

