//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSMutableArray, NSString, PAGView, UIFont, UIImageView;

@interface WCFinderProfileHeaderMusicInfoView : UIView
{
    _Bool _alreadyAnimation;
    NSArray *_items;
    double _itemPadding;
    UIFont *_font;
    unsigned long long _itemHash;
    PAGView *_pagView;
    UIView *_contentView;
    UIImageView *_bgView;
    NSMutableArray *_contents;
    NSMutableArray *_contentSizeArr;
    CALayer *_contentLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) _Bool alreadyAnimation; // @synthesize alreadyAnimation=_alreadyAnimation;
@property(retain, nonatomic) NSMutableArray *contentSizeArr; // @synthesize contentSizeArr=_contentSizeArr;
@property(retain, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(nonatomic) unsigned long long itemHash; // @synthesize itemHash=_itemHash;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double itemPadding; // @synthesize itemPadding=_itemPadding;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)onAnimationEnd:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)calContentSize;
- (void)displayNoremalContent;
- (void)startAnimation;
- (void)setupBGView:(id)arg1;
- (void)setupPAGView;
- (id)initWithFont:(id)arg1 itemPadding:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

