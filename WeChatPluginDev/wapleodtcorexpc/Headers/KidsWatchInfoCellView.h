//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, KidsWatchInfoItem, MMUILabel;

@interface KidsWatchInfoCellView : UIView
{
    _Bool _showSeparator;
    KidsWatchInfoItem *_item;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    UIView *_separatorView;
    CAShapeLayer *_dotLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(retain, nonatomic) KidsWatchInfoItem *item; // @synthesize item=_item;
- (void)setFrame:(struct CGRect)arg1;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

