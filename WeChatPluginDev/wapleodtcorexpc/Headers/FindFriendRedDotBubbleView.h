//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMBadgeView, RichTextView, UITapGestureRecognizer, WCFinderHeadImageView, WCFinderRedDotTipsShowInfo;

@interface FindFriendRedDotBubbleView : UIView
{
    CAShapeLayer *_bubbleLayer;
    UIView *_contentView;
    WCFinderHeadImageView *_headImageView;
    UIView *_headImageTopView;
    RichTextView *_textView;
    MMBadgeView *_badgeView;
    WCFinderRedDotTipsShowInfo *_showInfo;
    UITapGestureRecognizer *_tapGesture;
    CDUnknownBlockType _callback;
    struct CGSize _contentSize;
}

+ (_Bool)validateShowInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *headImageTopView; // @synthesize headImageTopView=_headImageTopView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateTapCallback:(CDUnknownBlockType)arg1;
- (void)generateBubbleLayerForArrowPosition:(double)arg1;
- (void)updateArrowAtPoint:(struct CGPoint)arg1 width:(double)arg2;
- (void)handleTap:(id)arg1;
- (void)initTapGesture;
- (void)layoutContentView;
- (void)initContentView;
- (void)adjustAnchorPoint;
- (id)initWithShowInfo:(id)arg1;

@end

