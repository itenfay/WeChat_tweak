//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GetProfileInfoResponse_RelievedBuyInfo, UILabel, WAProfileEasyBuyIconView, YYLabel;

@interface WAProfileServiceHeaderView : UIView
{
    GetProfileInfoResponse_RelievedBuyInfo *_buyInfo;
    CDUnknownBlockType _buttonClickAction;
    WAProfileEasyBuyIconView *_iconView;
    UILabel *_titleLabel;
    YYLabel *_descLabel;
}

+ (double)viewHeightByBuyInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YYLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WAProfileEasyBuyIconView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType buttonClickAction; // @synthesize buttonClickAction=_buttonClickAction;
@property(retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *buyInfo; // @synthesize buyInfo=_buyInfo;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithButtonClickAction:(CDUnknownBlockType)arg1;

@end

