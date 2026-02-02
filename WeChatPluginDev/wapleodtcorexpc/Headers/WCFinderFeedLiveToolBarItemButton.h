//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WCFinderFeedLiveToolBarItemButton
{
    UIImageView *_itemImageView;
    UILabel *_itemTitleLabel;
}

+ (id)generateStaticIconImage:(id)arg1 iconColor:(id)arg2;
+ (id)whiteColorWithAlphaComponent;
+ (id)toolbarItemButton;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void)setItemImageName:(id)arg1 iconColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

