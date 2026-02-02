//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, WCAdBulletScreenTextStyleInfo;

@interface WCAdBulletTextView
{
    NSString *_bulletText;
    WCAdBulletScreenTextStyleInfo *_bulletTextStyle;
    MMUILabel *_bulletTextLabel;
}

+ (id)fetchBulletTextColorWithTextStyle:(id)arg1;
+ (id)fetchBulletTextFontWithTextStyle:(id)arg1;
+ (struct CGSize)calcBulletTextViewSizeWithBulletText:(id)arg1 font:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *bulletTextLabel; // @synthesize bulletTextLabel=_bulletTextLabel;
@property(retain, nonatomic) WCAdBulletScreenTextStyleInfo *bulletTextStyle; // @synthesize bulletTextStyle=_bulletTextStyle;
@property(retain, nonatomic) NSString *bulletText; // @synthesize bulletText=_bulletText;
- (void)layoutSubviews;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 bulletText:(id)arg2 bulletTextStyle:(id)arg3;

@end

