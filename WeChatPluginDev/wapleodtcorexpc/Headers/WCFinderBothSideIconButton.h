//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;

@interface WCFinderBothSideIconButton
{
    _Bool _revertLayout;
    _Bool _hiddenImageView;
    UIImageView *_leadingIcon;
    NSString *_leadingIconUrl;
    double _leadingIconPadding;
    NSString *_mainIconUrl;
    double _iconPadding;
    unsigned long long _textContentHash;
    struct CGSize _leadingIconSize;
    struct CGSize _tailIconSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long textContentHash; // @synthesize textContentHash=_textContentHash;
@property(nonatomic) _Bool hiddenImageView; // @synthesize hiddenImageView=_hiddenImageView;
@property(nonatomic) _Bool revertLayout; // @synthesize revertLayout=_revertLayout;
@property(nonatomic) double iconPadding; // @synthesize iconPadding=_iconPadding;
@property(nonatomic) struct CGSize tailIconSize; // @synthesize tailIconSize=_tailIconSize;
@property(nonatomic) struct CGSize leadingIconSize; // @synthesize leadingIconSize=_leadingIconSize;
@property(retain, nonatomic) NSString *mainIconUrl; // @synthesize mainIconUrl=_mainIconUrl;
@property(nonatomic) double leadingIconPadding; // @synthesize leadingIconPadding=_leadingIconPadding;
@property(retain, nonatomic) NSString *leadingIconUrl; // @synthesize leadingIconUrl=_leadingIconUrl;
@property(retain, nonatomic) UIImageView *leadingIcon; // @synthesize leadingIcon=_leadingIcon;
- (unsigned long long)layoutDepHashValue;
- (struct CGSize)titleSizeThatFit:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

