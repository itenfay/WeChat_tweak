//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIStackView.h>

@class MMUILabel, UDRSecondCutPromotionItem, UIImageView;

@interface SecondCutPromotionItemView : UIStackView
{
    UIImageView *leadingIcon;
    MMUILabel *descriptionLabel;
    UIStackView *trailingStack;
    UDRSecondCutPromotionItem *_promotionItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UDRSecondCutPromotionItem *promotionItem; // @synthesize promotionItem=_promotionItem;
@property(retain, nonatomic) UIStackView *trailingStack; // @synthesize trailingStack;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(retain, nonatomic) UIImageView *leadingIcon; // @synthesize leadingIcon;
- (void)_initTrailingStack;
- (void)_initLeadingIcon;
- (void)_initLayout;
- (id)initFromResource:(id)arg1 andLocalTextKey:(id)arg2;
- (id)initWithPromotionItem:(id)arg1;

@end

