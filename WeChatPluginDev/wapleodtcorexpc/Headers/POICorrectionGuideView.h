//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, UIImageView, UIView;
@protocol POICorrectionGuideViewDelegate;

@interface POICorrectionGuideView
{
    _Bool _isPoiPrivated;
    NSString *_addr;
    NSString *_name;
    NSString *_phoneNumber;
    NSString *_poiid;
    id <POICorrectionGuideViewDelegate> _poiDelegate;
    UIView *_contentView;
    UIImageView *_iconView;
    UIButton *_confirmButton;
    MMUILabel *_titleLabel;
    MMUILabel *_secTitleLabel;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *secTitleLabel; // @synthesize secTitleLabel=_secTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <POICorrectionGuideViewDelegate> poiDelegate; // @synthesize poiDelegate=_poiDelegate;
@property(retain, nonatomic) NSString *poiid; // @synthesize poiid=_poiid;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *addr; // @synthesize addr=_addr;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) _Bool isPoiPrivated; // @synthesize isPoiPrivated=_isPoiPrivated;
- (void)confrimButtonClicked;
- (double)contentHeight;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

