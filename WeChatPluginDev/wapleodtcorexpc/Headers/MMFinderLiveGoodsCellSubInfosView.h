//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, UIFont, UIImageView;

@interface MMFinderLiveGoodsCellSubInfosView : UIView
{
    _Bool _isRouter;
    NSArray *_routerInfos;
    NSArray *_normalInfos;
    UIFont *_font;
    CDUnknownBlockType _routeAction;
    NSArray *_labels;
    NSArray *_lines;
    UIImageView *_iconView;
}

+ (_Bool)willShowInWidth:(double)arg1 withRouterInfos:(id)arg2 normalInfos:(id)arg3 font:(id)arg4;
+ (void)setRouterInfos:(id *)arg1 normalInfos:(id *)arg2 forAnchorWithGoods:(id)arg3;
+ (_Bool)willShowInWidth:(double)arg1 withGoods:(id)arg2 font:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(copy, nonatomic) CDUnknownBlockType routeAction; // @synthesize routeAction=_routeAction;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSArray *normalInfos; // @synthesize normalInfos=_normalInfos;
@property(retain, nonatomic) NSArray *routerInfos; // @synthesize routerInfos=_routerInfos;
@property(nonatomic) _Bool isRouter; // @synthesize isRouter=_isRouter;
- (id)accessibilityLabel;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTaped;
@property(readonly, nonatomic) _Bool hasInfoVisible;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)update;
- (id)routerColor;
@property(readonly, nonatomic) NSArray *infos;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateForAnchorWithGoods:(id)arg1;

@end

