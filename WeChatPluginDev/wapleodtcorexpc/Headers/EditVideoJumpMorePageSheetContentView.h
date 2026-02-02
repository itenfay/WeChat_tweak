//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, RichTextView, SecondCutPromotionItemStackView;

@interface EditVideoJumpMorePageSheetContentView : UIView
{
    RichTextView *titleView;
    MMUILabel *subTitleLabel;
    SecondCutPromotionItemStackView *promotionItemStackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SecondCutPromotionItemStackView *promotionItemStackView; // @synthesize promotionItemStackView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel;
@property(retain, nonatomic) RichTextView *titleView; // @synthesize titleView;
- (void)_heightToFit;
- (void)setPromotionItems:(id)arg1;
- (void)_initPromotionItemStackView;
- (void)_initSubtitle;
- (void)_initTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

