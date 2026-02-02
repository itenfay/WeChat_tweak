//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGenericPaymentItem, UIImageView, UILabel;

@interface MMFinderLiveGenericPaymentItemView : UIView
{
    _Bool _selected;
    MMFinderLiveGenericPaymentItem *_item;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UIImageView *_webeanImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *webeanImageView; // @synthesize webeanImageView=_webeanImageView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) MMFinderLiveGenericPaymentItem *item; // @synthesize item=_item;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithItem:(id)arg1;

@end

