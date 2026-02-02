//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCSheetView : UIScrollView
{
    _Bool _fixedWidth;
    double _contentWidth;
    double _minimumMainBottomSpacing;
    NSMutableArray *_privateComponentViews;
    NSMutableDictionary *_viewToAttributes;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *viewToAttributes; // @synthesize viewToAttributes=_viewToAttributes;
@property(retain, nonatomic) NSMutableArray *privateComponentViews; // @synthesize privateComponentViews=_privateComponentViews;
@property(nonatomic) _Bool fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double minimumMainBottomSpacing; // @synthesize minimumMainBottomSpacing=_minimumMainBottomSpacing;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
- (struct CGSize)calViewSizeThatFits:(struct CGSize)arg1 forView:(id)arg2 attributes:(id)arg3;
- (void)layoutSubviews;
- (void)setAlignment:(unsigned long long)arg1 forView:(id)arg2;
- (void)setUseSystemLayoutSizeFittingSize:(_Bool)arg1 forView:(id)arg2;
- (void)setFixedWidth:(_Bool)arg1 forView:(id)arg2;
- (void)setInsets:(struct UIEdgeInsets)arg1 forView:(id)arg2;
- (void)removeAllComponentViews;
- (void)removeComponentView:(id)arg1;
- (id)componentViews;
- (void)appendComponentView:(id)arg1 ofType:(unsigned long long)arg2;
- (void)appendComponentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

