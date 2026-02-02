//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMWebImageView, NSDictionary, UIImageView;
@protocol WASplashADMenuItemViewDelegate;

@interface WASplashADMenuItemView
{
    id <WASplashADMenuItemViewDelegate> _delegate;
    NSDictionary *_itemDict;
    MMUILabel *_mainTitleLabel;
    MMUILabel *_subTitleLabel;
    MMWebImageView *_logoImageView;
    UIImageView *_arrowView;
    MMUIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMWebImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) NSDictionary *itemDict; // @synthesize itemDict=_itemDict;
@property(nonatomic) __weak id <WASplashADMenuItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithMenuItemDict:(id)arg1;

@end

