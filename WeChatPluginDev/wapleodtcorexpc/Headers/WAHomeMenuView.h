//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel, UIView;

@interface WAHomeMenuView : NSObject
{
    MMWebImageView *_leftImageView;
    UILabel *_subTitleLabel;
    MMWebImageView *_rightImageView;
    UIView *_badgeView;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MMWebImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMWebImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void)loadUI:(id)arg1;
- (void)updateHomeMenuCellUIWithEntranceInfo:(id)arg1;
- (void)updateHomeMenuCellUIWithTipsInfo:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithCell:(id)arg1;

@end

