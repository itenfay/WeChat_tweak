//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UILabel;

@interface WCFinderPopupTipsView
{
    _Bool _isMainStatus;
    double _rawWidth;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMWebImageView *_iconUrlImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *iconUrlImageView; // @synthesize iconUrlImageView=_iconUrlImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double rawWidth; // @synthesize rawWidth=_rawWidth;
@property(nonatomic) _Bool isMainStatus; // @synthesize isMainStatus=_isMainStatus;
- (void)layoutAllTipsViews:(_Bool)arg1;
- (void)updateWithShowInfoItem:(id)arg1 isMain:(_Bool)arg2;
- (void)updateTextColor:(id)arg1 bgColorString:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

