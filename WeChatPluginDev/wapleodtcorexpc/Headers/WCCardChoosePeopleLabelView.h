//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, NSString, WCCardChooseSubPeopleLabelView;

@interface WCCardChoosePeopleLabelView
{
    NSString *_mainWording;
    NSString *_mainText;
    NSString *_subText;
    MMUIButton *_settingButton;
    MMUIImageView *_peopleImageView;
    WCCardChooseSubPeopleLabelView *_subPeopleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCardChooseSubPeopleLabelView *subPeopleView; // @synthesize subPeopleView=_subPeopleView;
@property(retain, nonatomic) MMUIImageView *peopleImageView; // @synthesize peopleImageView=_peopleImageView;
@property(retain, nonatomic) MMUIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(retain, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(retain, nonatomic) NSString *mainWording; // @synthesize mainWording=_mainWording;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

