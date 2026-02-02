//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveColorfulLabel, MMWebImageView, NSArray, NSString, UIColor;
@protocol WCFinderTabViewDelegate;

@interface WCFinderMoreGameLiveTabView : UIView
{
    unsigned int _bindTabId;
    id <WCFinderTabViewDelegate> delegate;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    NSString *_iconUrl;
    NSArray *_textColors;
    UIView *_containerView;
    MMLiveColorfulLabel *_titleLabel;
    NSString *_bindPath;
    UIView *_redDotView;
    double _fontSize;
    MMWebImageView *_iconImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) unsigned int bindTabId; // @synthesize bindTabId=_bindTabId;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(copy, nonatomic) NSString *bindPath; // @synthesize bindPath=_bindPath;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *textColors; // @synthesize textColors=_textColors;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) __weak id <WCFinderTabViewDelegate> delegate; // @synthesize delegate;
- (void)onLoadImageOK:(id)arg1;
- (void)processRedDotView;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)setBindRedDotPath:(id)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (void)layoutUIMargin;
- (void)layoutSubviews;
- (void)sizeToFit;
- (_Bool)isIconImageHidden;
- (_Bool)isRedDotViewHidden;
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

