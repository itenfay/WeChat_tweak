//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel;

@interface WCAdIconView
{
    long long _iconType;
    UIImageView *_icon;
    UILabel *_label;
    NSString *_labelLanguage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *labelLanguage; // @synthesize labelLanguage=_labelLanguage;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
- (_Bool)initViews;
- (id)initWithAdIconType:(long long)arg1 labelLanguage:(id)arg2;
- (id)initWithAdIconType:(long long)arg1;

@end

