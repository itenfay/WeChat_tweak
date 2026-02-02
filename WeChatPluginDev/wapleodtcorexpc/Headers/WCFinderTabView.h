//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIColor;
@protocol WCFinderTabViewDelegate;

@interface WCFinderTabView : UIView
{
    _Bool _useAutoFitTitleStrategy;
    id <WCFinderTabViewDelegate> delegate;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    double _fWidth;
    double _topInset;
    double _bottomInset;
    RichTextView *_titleView;
    NSString *_bindPath;
    UIView *_redDotView;
    double _fontSize;
    NSString *_customAccessibilityLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(copy, nonatomic) NSString *bindPath; // @synthesize bindPath=_bindPath;
@property(retain, nonatomic) RichTextView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool useAutoFitTitleStrategy; // @synthesize useAutoFitTitleStrategy=_useAutoFitTitleStrategy;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) double fWidth; // @synthesize fWidth=_fWidth;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) __weak id <WCFinderTabViewDelegate> delegate; // @synthesize delegate;
- (void)processRedDotView;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)clearRedDotView;
- (void)setRedDotString:(id)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (void)sizeToFit;
- (void)setTitleText:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

