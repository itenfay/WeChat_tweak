//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, FTSFavSearchResultItem, NSMutableArray, NSString, UIView;

@interface FTSFavCell
{
    FTSFavSearchResultItem *_searchItem;
    NSMutableArray *_arrKeyword;
    NSString *_searchText;
    AttributeLabel *_titleLabel;
    AttributeLabel *_descLabel;
    AttributeLabel *_detailLabel;
    UIView *_thumbImageView;
}

- (void).cxx_destruct;
- (void)setLineSpaceForLabel:(id)arg1;
- (void)updateStatus:(_Bool)arg1;
- (void)updateFavSearchItem:(id)arg1 arrKeyword:(id)arg2 searchText:(id)arg3;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

