//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMIconItemViewConfig, MMUILabel, MMWebImageView, NSString, NSURL, UIColor, UIImage;
@protocol MMIconItemDelegate;

@interface MMIconItemView : UIView
{
    _Bool _changeIconColorOnAppearanceChange;
    MMIconItemViewConfig *_config;
    NSURL *_iconImageURL;
    double _textMaxWidth;
    id <MMIconItemDelegate> _delegate;
    MMWebImageView *_iconView;
    MMUILabel *_titleLabel;
    UIColor *_iconColorLM;
    UIColor *_iconColorDM;
    UIView *_bgView;
    UIImage *_iconImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIColor *iconColorDM; // @synthesize iconColorDM=_iconColorDM;
@property(retain, nonatomic) UIColor *iconColorLM; // @synthesize iconColorLM=_iconColorLM;
@property(nonatomic) _Bool changeIconColorOnAppearanceChange; // @synthesize changeIconColorOnAppearanceChange=_changeIconColorOnAppearanceChange;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <MMIconItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double textMaxWidth; // @synthesize textMaxWidth=_textMaxWidth;
@property(retain, nonatomic) NSURL *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(retain, nonatomic) MMIconItemViewConfig *config; // @synthesize config=_config;
- (void)onConfigChanged;
- (id)webImageViewWithURL:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)updateColorOnAppearanceChange;
- (struct CGSize)intrinsicContentSize;
- (void)layoutViews;
- (void)initViews;
- (void)parseConfig;
- (id)initWithConfig:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

