//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UIScrollView;
@protocol EditImageColorSquareBarDelegate;

@interface EditImageColorSquareBar
{
    _Bool _layoutsVertically;
    id <EditImageColorSquareBarDelegate> _m_delegate;
    NSArray *_colorArr;
    long long _colorIndex;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long colorIndex; // @synthesize colorIndex=_colorIndex;
@property(retain, nonatomic) NSArray *colorArr; // @synthesize colorArr=_colorArr;
@property(nonatomic) _Bool layoutsVertically; // @synthesize layoutsVertically=_layoutsVertically;
@property(nonatomic) __weak id <EditImageColorSquareBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelectColor:(long long)arg1;
- (void)setColorSqaureWithIndex:(long long)arg1;
- (void)setColorSquare:(id)arg1;
- (void)onClickColorButton:(id)arg1;
- (id)colorBarPanGesture;
- (void)setColorBarScrollEnable:(_Bool)arg1;
- (void)setUnSelectedColor;
- (id)colorDescAtIndex:(unsigned long long)arg1;
- (id)colorAtIndex:(unsigned long long)arg1;
- (void)reloadView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 withDelegate:(id)arg2 withDefaultColorIndex:(long long)arg3;

@end

