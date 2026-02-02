//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo, UIImageView, UILabel, UIView;

@interface WAPNPageSheetListItemCell
{
    UILabel *_phoneNumberLabel;
    UILabel *_describeLabel;
    UIImageView *_toggleImageView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo *_info;
}

+ (double)edgeLR;
+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIImageView *toggleImageView; // @synthesize toggleImageView=_toggleImageView;
@property(retain, nonatomic) UILabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
- (void)fillPhoneInfo:(id)arg1;
- (void)unToggle;
- (void)toggle;
- (void)markUnBottom;
- (void)markBottom;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

