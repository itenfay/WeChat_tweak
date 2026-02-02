//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveBeautyItemGroup, UILabel;
@protocol MMLiveBeautyItemGroupTabViewDelegate;

@interface MMLiveBeautyItemGroupTabView : UIView
{
    _Bool _selected;
    MMLiveBeautyItemGroup *_itemGroup;
    id <MMLiveBeautyItemGroupTabViewDelegate> _delegate;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <MMLiveBeautyItemGroupTabViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) MMLiveBeautyItemGroup *itemGroup; // @synthesize itemGroup=_itemGroup;
- (void)onTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

