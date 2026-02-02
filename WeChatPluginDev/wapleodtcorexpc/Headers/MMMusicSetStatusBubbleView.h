//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicSetStatusBubbleTriangleView, MMUIButton, MMUILabel, UIImageView;
@protocol MMMusicSetStatusBubbleViewDelegate;

@interface MMMusicSetStatusBubbleView
{
    id <MMMusicSetStatusBubbleViewDelegate> _delegate;
    MMUIButton *_setStatusContainerBtn;
    MMUILabel *_prefixStatusLabel;
    UIImageView *_statusLogoImageView;
    MMUILabel *_suffixStatusLabel;
    MMMusicSetStatusBubbleTriangleView *_triangleView;
    struct CGRect _anchorRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect anchorRect; // @synthesize anchorRect=_anchorRect;
@property(retain, nonatomic) MMMusicSetStatusBubbleTriangleView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) MMUILabel *suffixStatusLabel; // @synthesize suffixStatusLabel=_suffixStatusLabel;
@property(retain, nonatomic) UIImageView *statusLogoImageView; // @synthesize statusLogoImageView=_statusLogoImageView;
@property(retain, nonatomic) MMUILabel *prefixStatusLabel; // @synthesize prefixStatusLabel=_prefixStatusLabel;
@property(retain, nonatomic) MMUIButton *setStatusContainerBtn; // @synthesize setStatusContainerBtn=_setStatusContainerBtn;
@property(nonatomic) __weak id <MMMusicSetStatusBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleSetStatusContainerButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)setTriangleAnchorRect:(struct CGRect)arg1;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

