//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, NSString, UIImageView;

@interface FTSSearchCell
{
    UIImageView *_searchIcon;
    AttributeLabel *_searchLabel;
    NSString *_showPrefix;
    NSString *_showSuffix;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateSearchTip:(id)arg1 suffix:(id)arg2;
- (void)updateStatus:(_Bool)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

