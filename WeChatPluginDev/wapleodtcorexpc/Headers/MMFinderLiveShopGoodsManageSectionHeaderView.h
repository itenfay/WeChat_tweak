//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveShopShelfCoordinator, MMUIButton, MMUILabel, NSString;
@protocol MMFinderLiveShopGoodsManageSectionHeaderViewDelegate;

@interface MMFinderLiveShopGoodsManageSectionHeaderView
{
    _Bool _shouldHideFlashSale;
    _Bool _shouldHideOthersExceptFlashSale;
    id <MMFinderLiveShopGoodsManageSectionHeaderViewDelegate> _delegate;
    NSString *_title;
    MMUILabel *_titleLabel;
    MMUIButton *_flashSaleButton;
    MMUIButton *_manageButton;
    MMUIButton *_addGoodsButton;
    MMFinderLiveShopShelfCoordinator *_coordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveShopShelfCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) MMUIButton *addGoodsButton; // @synthesize addGoodsButton=_addGoodsButton;
@property(retain, nonatomic) MMUIButton *manageButton; // @synthesize manageButton=_manageButton;
@property(retain, nonatomic) MMUIButton *flashSaleButton; // @synthesize flashSaleButton=_flashSaleButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool shouldHideOthersExceptFlashSale; // @synthesize shouldHideOthersExceptFlashSale=_shouldHideOthersExceptFlashSale;
@property(nonatomic) _Bool shouldHideFlashSale; // @synthesize shouldHideFlashSale=_shouldHideFlashSale;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MMFinderLiveShopGoodsManageSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)addButtonWithImage:(id)arg1 text:(id)arg2 action:(SEL)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithCoordinatorAndGoodsCount:(unsigned long long)arg1;

@end

