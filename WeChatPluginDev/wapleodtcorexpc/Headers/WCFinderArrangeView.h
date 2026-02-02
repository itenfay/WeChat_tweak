//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIColor;

@interface WCFinderArrangeView
{
    _Bool _horizontal;
    _Bool _showSeparator;
    _Bool _isDirty;
    double _padding;
    UIColor *_separatorColor;
    double _separatorPaddingStart;
    double _separatorPaddingEnd;
    NSMutableArray *_lineViews;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(retain, nonatomic) NSMutableArray *lineViews; // @synthesize lineViews=_lineViews;
@property(nonatomic) double separatorPaddingEnd; // @synthesize separatorPaddingEnd=_separatorPaddingEnd;
@property(nonatomic) double separatorPaddingStart; // @synthesize separatorPaddingStart=_separatorPaddingStart;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) double padding; // @synthesize padding=_padding;
- (void)doLayoutSubviews;
- (void)layoutSubviews;
- (void)ensureLineView:(long long)arg1;
- (void)doLayout;
- (struct CGRect)bounds;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)layoutDelay;
- (void)onSubviewHiddenChanged:(id)arg1;
- (_Bool)ignoreView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

