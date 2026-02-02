//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WCFinderFullCollectionToolbarItemButton
{
    _Bool _itemTitleAnimating;
    UIImageView *_itemImageView;
    UILabel *_itemTitleLabel;
    UILabel *_additionalInfoLabel;
}

+ (id)generateStaticIconImage:(id)arg1 iconColor:(id)arg2;
+ (id)whiteColorWithAlphaComponent;
+ (id)toolbarItemButton;
- (void).cxx_destruct;
@property(nonatomic) _Bool itemTitleAnimating; // @synthesize itemTitleAnimating=_itemTitleAnimating;
@property(retain, nonatomic) UILabel *additionalInfoLabel; // @synthesize additionalInfoLabel=_additionalInfoLabel;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (_Bool)updateAdditionalInfoShowState:(_Bool)arg1 animationDuration:(double)arg2 complection:(CDUnknownBlockType)arg3;
- (void)prepareAdditionalInfoLabel;
- (void)setEnabled:(_Bool)arg1;
- (void)setItemImageName:(id)arg1 iconColor:(id)arg2;
- (id)titleLabel;
- (id)imageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

