//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView;

@interface MMLiveShopShelfDragBar
{
    MMUIView *_barView;
    double _displayDragCloseStyleProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double displayDragCloseStyleProgress; // @synthesize displayDragCloseStyleProgress=_displayDragCloseStyleProgress;
@property(retain, nonatomic) MMUIView *barView; // @synthesize barView=_barView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) _Bool displayDragCloseStyle;
- (void)handleDragBarGestureEnd;
- (void)handleDragBarGestureChange:(double)arg1;
- (void)doLayoutBarView;
- (void)updateDisplayDragCloseStyle;
- (void)layoutSubviews;
- (void)updateBarViewColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

