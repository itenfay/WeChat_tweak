//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIColor;

@interface WCFinderLayoutView : UIView
{
    _Bool _addTopBottomSperator;
    long long _axis;
    double _spacing;
    UIColor *_speratorLineColor;
    NSMutableDictionary *_arrangeViews;
    struct CGSize _contentSize;
    struct CGSize _preSize;
    struct UIEdgeInsets _seperatorInset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize preSize; // @synthesize preSize=_preSize;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSMutableDictionary *arrangeViews; // @synthesize arrangeViews=_arrangeViews;
@property(nonatomic) _Bool addTopBottomSperator; // @synthesize addTopBottomSperator=_addTopBottomSperator;
@property(retain, nonatomic) UIColor *speratorLineColor; // @synthesize speratorLineColor=_speratorLineColor;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct UIEdgeInsets seperatorInset; // @synthesize seperatorInset=_seperatorInset;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (id)arrangeSubViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)removeAllArrangeSubviews;
- (id)getArrangeSubviewByPriority:(long long)arg1;
- (void)addArrangedSubview:(id)arg1 priority:(long long)arg2;
- (void)addArrangedSubview:(id)arg1;
- (void)layoutAllViews;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

