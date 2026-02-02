//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMenuItemData, NSMutableArray, NSString, UIColor, UIImageView;
@protocol MMMenuContentViewDelegate;

@interface MMMenuContentView : UIView
{
    id <MMMenuContentViewDelegate> _delegate;
    MMMenuItemData *_menuData;
    UIColor *_customBackgroundColor;
    UIView *_menuItemContainerView;
    UIImageView *_arrowImageView;
    NSMutableArray *_menuItemViews;
    NSMutableArray *_separatorViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) NSMutableArray *menuItemViews; // @synthesize menuItemViews=_menuItemViews;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *menuItemContainerView; // @synthesize menuItemContainerView=_menuItemContainerView;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(retain, nonatomic) MMMenuItemData *menuData; // @synthesize menuData=_menuData;
@property(nonatomic) __weak id <MMMenuContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMenuItemSelected:(id)arg1 itemView:(id)arg2;
- (void)onMenuViewDidShow;
- (void)updateSubviewsFrame;
- (void)layoutSubviews;
- (void)addSeparatorLineInY:(double)arg1 left:(double)arg2 right:(double)arg3;
- (void)addSeparatorLineInY:(double)arg1;
- (void)makeItemsView:(id)arg1;
- (void)updateWithData:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

