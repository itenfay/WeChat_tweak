//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel;

@interface WCCanvasShareComponent
{
    UIImageView *_shareIcon;
    UILabel *_shareText;
    UIButton *_hotZone;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *hotZone; // @synthesize hotZone=_hotZone;
@property(retain, nonatomic) UILabel *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) UIImageView *shareIcon; // @synthesize shareIcon=_shareIcon;
- (void)onShareComponentClicked;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)updateViews;
- (void)initViews;
- (void)layoutSubviews;

@end

