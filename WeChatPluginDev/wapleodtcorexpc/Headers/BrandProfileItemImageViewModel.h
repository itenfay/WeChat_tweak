//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandProfileItemImageViewModel
{
    struct CGSize _coverImgSize;
}

@property(nonatomic) struct CGSize coverImgSize; // @synthesize coverImgSize=_coverImgSize;
@property(readonly, nonatomic) NSString *imageCountStr;
- (id)coverImgURL;
- (id)titleFont;
- (double)titleMaxWidth;
- (double)normalCoverBottomMargin;
- (double)calSingleStyleItemHeight;
- (double)calCellHeight;
- (_Bool)showBigCover;
- (id)tableViewCellClassName;

@end

