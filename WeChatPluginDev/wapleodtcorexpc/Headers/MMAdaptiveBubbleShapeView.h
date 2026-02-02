//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface MMAdaptiveBubbleShapeView
{
    UIImageView *_mainPartBgImageView;
    UIImageView *_arrowImageView;
    double _arrowImageViewRight;
    struct CGSize _mainPartContentViewSize;
    struct UIEdgeInsets _mainPartContentViewEdgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) double arrowImageViewRight; // @synthesize arrowImageViewRight=_arrowImageViewRight;
@property(nonatomic) struct UIEdgeInsets mainPartContentViewEdgeInsets; // @synthesize mainPartContentViewEdgeInsets=_mainPartContentViewEdgeInsets;
@property(nonatomic) struct CGSize mainPartContentViewSize; // @synthesize mainPartContentViewSize=_mainPartContentViewSize;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *mainPartBgImageView; // @synthesize mainPartBgImageView=_mainPartBgImageView;
- (void)relayoutAllSubviews;
- (void)layoutSubviews;
- (void)setupArrowImageView;
- (void)setupMainPartImageView;
- (id)init;

@end

