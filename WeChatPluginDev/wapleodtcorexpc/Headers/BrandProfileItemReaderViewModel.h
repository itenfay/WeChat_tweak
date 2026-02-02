//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileItemReaderCell;

@interface BrandProfileItemReaderViewModel
{
}

- (double)titleMaxWidth;
- (id)titleFont;
- (id)coverImgURL;
- (id)tableViewCellClassName;
- (double)normalCoverBottomMargin;
- (double)firstItemTopPadding;
@property(readonly, nonatomic) double normalCoverTopMargin;
- (double)itemViewHeightForNormalItem;
- (double)calCellHeight;
- (_Bool)showAsLargeCover;

// Remaining properties
@property(nonatomic) __weak BrandProfileItemReaderCell *cellView; // @dynamic cellView;

@end

