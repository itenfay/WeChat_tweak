//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandProfileItemVideoViewModel
{
    double _titleMaxWidth;
    NSString *_timeStr;
    NSString *_coverImgURL;
    struct CGSize _coverImgSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize coverImgSize; // @synthesize coverImgSize=_coverImgSize;
@property(retain, nonatomic) NSString *coverImgURL; // @synthesize coverImgURL=_coverImgURL;
@property(retain, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property(nonatomic) double titleMaxWidth; // @synthesize titleMaxWidth=_titleMaxWidth;
- (id)titleFont;
- (double)calSingleStyleItemHeight;
- (double)normalCoverBottomMargin;
- (double)calCellHeight;
@property(readonly, nonatomic) unsigned long long style;
- (id)tableViewCellClassName;

@end

