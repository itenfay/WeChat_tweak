//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMECProductShowBoxItemsViewConfig, NSArray;

@interface MMECProductShowBoxItemsView : UIView
{
    MMECProductShowBoxItemsViewConfig *_config;
    CDUnknownBlockType _onSecKillArriveTime;
    NSArray *_items;
    NSArray *_views;
}

+ (_Bool)canShowSecKillLabel:(id)arg1 withConfig:(id)arg2 inWidth:(double)arg3;
+ (double)widthForSecKillLabel:(id)arg1 withConfig:(id)arg2;
+ (_Bool)canShowImageWithPictureInfo:(id)arg1 inSize:(struct CGSize)arg2;
+ (double)widthForImageWithPictureInfo:(id)arg1 height:(double)arg2;
+ (_Bool)canShowTextItem:(id)arg1 withConfig:(id)arg2 inWidth:(double)arg3;
+ (double)widthForTextItem:(id)arg1 withConfig:(id)arg2;
+ (id)basicLabelParamsForTextItem:(id)arg1 withConfig:(id)arg2;
+ (id)createTextItemBy:(id)arg1;
+ (double)heightWithWidth:(double)arg1 config:(id)arg2 items:(id)arg3;
+ (_Bool)canShowAtLeastOneForSize:(struct CGSize)arg1 config:(id)arg2 items:(id)arg3;
+ (double)borderImageLabelImageToText;
+ (double)spacing;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *views; // @synthesize views=_views;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType onSecKillArriveTime; // @synthesize onSecKillArriveTime=_onSecKillArriveTime;
@property(retain, nonatomic) MMECProductShowBoxItemsViewConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSArray *visibleShowBoxItems;
- (void)updateWithItems:(id)arg1;
- (void)useShowBoxItemViews:(id)arg1;
- (id)createSecKillLabel:(id)arg1;
- (id)createImageWithPictureInfo:(id)arg1;
- (id)createImageTextLabelWithTextItem:(id)arg1;
- (id)createViewBy:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

