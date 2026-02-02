//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJDualBorderLayer, UIColor;

@interface MJSegmentCellBorderView : UIView
{
    _Bool _isBorderVisible;
    _Bool _shouldShowSeparatorLine;
    MJDualBorderLayer *_borderLayer;
    MJDualBorderLayer *_separatorLineLayer;
    UIColor *_separatorLineColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
@property(nonatomic) _Bool shouldShowSeparatorLine; // @synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine;
@property(readonly, nonatomic) MJDualBorderLayer *separatorLineLayer; // @synthesize separatorLineLayer=_separatorLineLayer;
@property(readonly, nonatomic) MJDualBorderLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
- (void)hideBorderAnimated:(_Bool)arg1;
- (void)showBorderAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

