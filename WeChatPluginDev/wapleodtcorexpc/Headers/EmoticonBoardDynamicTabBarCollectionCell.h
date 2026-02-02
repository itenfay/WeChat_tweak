//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonTabItemView, UIColor, UIView;

@interface EmoticonBoardDynamicTabBarCollectionCell : UICollectionViewCell
{
    _Bool _wxSelected;
    _Bool _allowManage;
    EmoticonTabItemView *_itemView;
    UIView *_wxSelectedBGView;
    UIColor *_selectedBackgroundColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowManage; // @synthesize allowManage=_allowManage;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) UIView *wxSelectedBGView; // @synthesize wxSelectedBGView=_wxSelectedBGView;
@property(nonatomic) _Bool wxSelected; // @synthesize wxSelected=_wxSelected;
@property(retain, nonatomic) EmoticonTabItemView *itemView; // @synthesize itemView=_itemView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

