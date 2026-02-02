//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, MMFinderLiveAudienceGoodsCell, MMLiveDisplayLinkAnimator, PAGView, UIButton, UIView;

@interface MMFinderLiveShopShelfAddToShoppingCartAnimator : NSObject
{
    MMLiveDisplayLinkAnimator *_displayLinkAnimator;
    MMFinderLiveAudienceGoodsCell *_cell;
    UIButton *_targetButton;
    UIView *_container;
    PAGView *_pagView;
    UIView *_imageView;
    CADisplayLink *_displayLink;
    double _startTime;
    struct CGPoint _part2From;
    struct CGPoint _part2To;
}

- (void).cxx_destruct;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGPoint part2To; // @synthesize part2To=_part2To;
@property(nonatomic) struct CGPoint part2From; // @synthesize part2From=_part2From;
@property(nonatomic) __weak CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak UIView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak PAGView *pagView; // @synthesize pagView=_pagView;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak UIButton *targetButton; // @synthesize targetButton=_targetButton;
@property(nonatomic) __weak MMFinderLiveAudienceGoodsCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) MMLiveDisplayLinkAnimator *displayLinkAnimator; // @synthesize displayLinkAnimator=_displayLinkAnimator;
- (id)bindKey;
- (void)updateImageViewWithProgress:(double)arg1;
- (double)start;
- (id)initWithCell:(id)arg1 targetButton:(id)arg2 container:(id)arg3;

@end

