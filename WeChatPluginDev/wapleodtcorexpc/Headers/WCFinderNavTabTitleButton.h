//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderNavTabTitle, YYLabel;

@interface WCFinderNavTabTitleButton
{
    WCFinderNavTabTitle *_normalTitle;
    WCFinderNavTabTitle *_selectedTitle;
    YYLabel *_label;
    NSString *_dispalyAccessibilityLabel;
    struct CGSize _normalSize;
    struct CGSize _selectedSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dispalyAccessibilityLabel; // @synthesize dispalyAccessibilityLabel=_dispalyAccessibilityLabel;
@property(retain, nonatomic) YYLabel *label; // @synthesize label=_label;
@property(nonatomic) struct CGSize selectedSize; // @synthesize selectedSize=_selectedSize;
@property(nonatomic) struct CGSize normalSize; // @synthesize normalSize=_normalSize;
@property(retain, nonatomic) WCFinderNavTabTitle *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) WCFinderNavTabTitle *normalTitle; // @synthesize normalTitle=_normalTitle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutLabel;
- (id)accessibilityLabel;
- (void)update;
- (struct CGSize)displaySizeFotTitle:(id)arg1;
- (void)setupTitle:(id)arg1 selectedTitle:(id)arg2 accessibilityLabel:(id)arg3;

@end

