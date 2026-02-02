//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIFont;

@interface BrandProfileMsgHeaderViewModel
{
    NSMutableArray *_titleLabelStyles;
    struct CGSize _titleSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(retain, nonatomic) NSMutableArray *titleLabelStyles; // @synthesize titleLabelStyles=_titleLabelStyles;
- (void)onUnfold;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) NSString *titleStr;
@property(readonly, nonatomic) double titleBottomPadding;
@property(readonly, nonatomic) double titleTopPadding;
@property(readonly, nonatomic) double titleHeight;
@property(readonly, nonatomic) unsigned long long headerType;
- (double)calCellHeight;
- (id)tableViewCellClassName;

@end

