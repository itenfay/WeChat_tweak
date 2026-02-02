//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppFileNodeProgressView, AttributeLabel, MMHeadImageView, MMUIActivityIndicatorView, MMUILabel, MMUIView, MMWebImageView, NSString, UIImageView, UILabel, UIView;
@protocol MsgFileBrowseItemViewDelegate;

@interface MsgFileBrowseItemView
{
    MMHeadImageView *_headImgView;
    AttributeLabel *_nameLabel;
    AttributeLabel *_statusLabel;
    MMUILabel *_timeLabel;
    MMUIView *_contentBkView;
    MMWebImageView *_thumbView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_detailLabel;
    UIView *_markSelectedView;
    UIImageView *_markSelectedImageView;
    UIView *_disabledMaskView;
    MMUIActivityIndicatorView *_downloadingFlower;
    UIImageView *_expiredIcon;
    AppFileNodeProgressView *_circleProgress;
    AttributeLabel *_expireLabel;
    NSString *_name;
    NSString *_title;
    NSString *_detail;
    NSString *_detailIgnorePrefix;
    _Bool _isSelectable;
    _Bool _isSelected;
    _Bool _isLoading;
    _Bool _isDisabled;
    _Bool _isExpired;
    NSString *_itemID;
    double _circlePercent;
    id <MsgFileBrowseItemViewDelegate> _delegate;
    UILabel *_thumbDescLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *thumbDescLabel; // @synthesize thumbDescLabel=_thumbDescLabel;
@property(nonatomic) __weak id <MsgFileBrowseItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double circlePercent; // @synthesize circlePercent=_circlePercent;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void)sizeToFit;
- (id)getThumbImageView;
- (void)setHighlightWord:(id)arg1 Detail:(id)arg2;
- (void)updateWidthMsg:(id)arg1;
- (void)onClickSelect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

