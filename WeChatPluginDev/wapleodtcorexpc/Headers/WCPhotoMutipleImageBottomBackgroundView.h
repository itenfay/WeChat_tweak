//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, RichTextView, UIImageView, WCDataItem;

@interface WCPhotoMutipleImageBottomBackgroundView : UIView
{
    _Bool _fittingSize;
    RichTextView *_contentView;
    UIImageView *_privateImageView;
    WCDataItem *_dataItem;
    CAGradientLayer *_backgroundLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fittingSize; // @synthesize fittingSize=_fittingSize;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) UIImageView *privateImageView; // @synthesize privateImageView=_privateImageView;
@property(retain, nonatomic) RichTextView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)updateWithDataItem:(id)arg1;
- (void)initPrivateImageView;
- (void)initContentView;
- (void)initBackgroundLayer;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2;

@end

