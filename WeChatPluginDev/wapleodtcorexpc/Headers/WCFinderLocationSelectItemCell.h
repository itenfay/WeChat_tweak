//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WCFinderLocationSelectItem;

@interface WCFinderLocationSelectItemCell : UITableViewCell
{
    UILabel *_poiNameLabel;
    UILabel *_poiAddressLabel;
    UILabel *_selectOtherPOILabel;
    UIImageView *_selectedIcon;
    UIView *_seperatorLine;
    WCFinderLocationSelectItem *_item;
    struct CGSize _layoutSize;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLocationSelectItem *item; // @synthesize item=_item;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIImageView *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UILabel *selectOtherPOILabel; // @synthesize selectOtherPOILabel=_selectOtherPOILabel;
@property(retain, nonatomic) UILabel *poiAddressLabel; // @synthesize poiAddressLabel=_poiAddressLabel;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
- (void)updateWithLocationSelectItem:(id)arg1 selected:(_Bool)arg2;
- (void)updateUI;
- (void)setupUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

