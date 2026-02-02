//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMScrollActionSheetItem, MMUIButton, MMUILabel;
@protocol MMLiveActionSheetCollectionCellDelegate;

@interface MMLiveActionSheetCollectionCell : UICollectionViewCell
{
    _Bool _disableInnerRedDotLogic;
    id <MMLiveActionSheetCollectionCellDelegate> _cellDelegate;
    MMUIButton *_itemButton;
    MMUILabel *_itemNameLabel;
    MMUILabel *_itemSubtitleLabel;
    MMScrollActionSheetItem *_actionSheetItem;
}

+ (struct CGSize)getCellSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableInnerRedDotLogic; // @synthesize disableInnerRedDotLogic=_disableInnerRedDotLogic;
@property(retain, nonatomic) MMScrollActionSheetItem *actionSheetItem; // @synthesize actionSheetItem=_actionSheetItem;
@property(retain, nonatomic) MMUILabel *itemSubtitleLabel; // @synthesize itemSubtitleLabel=_itemSubtitleLabel;
@property(retain, nonatomic) MMUILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
@property(retain, nonatomic) MMUIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(nonatomic) __weak id <MMLiveActionSheetCollectionCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)onTaped;
- (void)updateRedDot;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateItemButtonColor;
- (void)updateWithActionSheetItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

