//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, NSMutableArray, UIColor;
@protocol WCFinderTagHeaderCollectionReusableViewDelegate;

@interface WCFinderTagHeaderCollectionReusableView : UICollectionReusableView
{
    id <WCFinderTagHeaderCollectionReusableViewDelegate> _delegate;
    UIColor *_buttonNormalBackgroundColor;
    UIColor *_buttonSelectedBackgroundColor;
    NSMutableArray *_buttonArray;
    NSMutableArray *_categoryArray;
    MMUIButton *_arrowButton;
}

+ (double)getTagHeaderViewHeight:(id)arg1 screenSize:(struct CGSize)arg2 showTotalTag:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) NSMutableArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIColor *buttonSelectedBackgroundColor; // @synthesize buttonSelectedBackgroundColor=_buttonSelectedBackgroundColor;
@property(retain, nonatomic) UIColor *buttonNormalBackgroundColor; // @synthesize buttonNormalBackgroundColor=_buttonNormalBackgroundColor;
@property(nonatomic) __weak id <WCFinderTagHeaderCollectionReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFoldButtonHidden:(_Bool)arg1;
- (id)getFirstLineCategoryString;
- (_Bool)hasFoldButton;
- (void)onClickArrowButtonAction:(id)arg1;
- (void)onClickTagButtonAction:(id)arg1;
- (void)updateTagHeaderButtonsMultiStyleWith:(id)arg1 selectedIndex:(long long)arg2;
- (void)updateTagHeaderButtonsSigleStyleWith:(id)arg1 selectedIndex:(long long)arg2;
- (id)getNewCategoryButton;
- (double)getTagButtonWidthTarget:(double)arg1 limitWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

