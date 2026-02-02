//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIImageView, UITapGestureRecognizer;
@protocol KidsWatchSwitchCellViewDelegate;

@interface KidsWatchSwitchCellView : UIView
{
    _Bool _selected;
    id <KidsWatchSwitchCellViewDelegate> _delegate;
    NSString *_title;
    UIView *_topSeparateView;
    MMUILabel *_titleLabel;
    UIImageView *_selectIconView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topSeparateView; // @synthesize topSeparateView=_topSeparateView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <KidsWatchSwitchCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)onTap:(id)arg1;
- (void)initGesture;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

