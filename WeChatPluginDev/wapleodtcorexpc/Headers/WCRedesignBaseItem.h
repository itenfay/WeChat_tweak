//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCRedesignBaseItemView;

@interface WCRedesignBaseItem
{
    unsigned int _separators;
    WCRedesignBaseItemView *_itemView;
    double _horizonPadding;
    double _maxTitleWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(nonatomic) double horizonPadding; // @synthesize horizonPadding=_horizonPadding;
@property(nonatomic) unsigned int separators; // @synthesize separators=_separators;
@property(retain, nonatomic) WCRedesignBaseItemView *itemView; // @synthesize itemView=_itemView;
- (_Bool)isBreakLine;
- (_Bool)shouldBreakLineForMaxContentWidth:(double)arg1 itemWidth:(double)arg2;
- (void)onLayoutContentViewSubviews;
- (void)onTapBackground;
- (id)backgroundButton;
- (id)contentView;
- (id)titleView;
@property(readonly, nonatomic) double currentTitleWidth;
- (void)setM_title:(id)arg1;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

@end

