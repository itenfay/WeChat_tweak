//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIFont, UIImage, WAContact;

@interface WAWebViewBottomBannerViewModel
{
    _Bool _roundImage;
    _Bool _originalGame;
    UIImage *_defaultImage;
    NSString *_iconURLString;
    NSString *_mmHeadImageUsername;
    NSString *_title;
    long long _numberOfLinesForTitle;
    NSArray *_buttonsViewModel;
    double _avatorTopSpacing;
    double _avatorLeftSpacing;
    double _buttonRightSpacing;
    double _avatorWidth;
    double _elementLeftOrRightSpacing;
    double _labelTopOrBottomSpacing;
    double _labelLeftSpacing;
    double _labelRightSpacing;
    UIFont *_titleFont;
    NSString *_titleTail;
    WAContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool originalGame; // @synthesize originalGame=_originalGame;
@property(retain, nonatomic) NSString *titleTail; // @synthesize titleTail=_titleTail;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double labelRightSpacing; // @synthesize labelRightSpacing=_labelRightSpacing;
@property(nonatomic) double labelLeftSpacing; // @synthesize labelLeftSpacing=_labelLeftSpacing;
@property(nonatomic) double labelTopOrBottomSpacing; // @synthesize labelTopOrBottomSpacing=_labelTopOrBottomSpacing;
@property(nonatomic) double elementLeftOrRightSpacing; // @synthesize elementLeftOrRightSpacing=_elementLeftOrRightSpacing;
@property(nonatomic) double avatorWidth; // @synthesize avatorWidth=_avatorWidth;
@property(nonatomic) double buttonRightSpacing; // @synthesize buttonRightSpacing=_buttonRightSpacing;
@property(nonatomic) double avatorLeftSpacing; // @synthesize avatorLeftSpacing=_avatorLeftSpacing;
@property(nonatomic) double avatorTopSpacing; // @synthesize avatorTopSpacing=_avatorTopSpacing;
@property(retain, nonatomic) NSArray *buttonsViewModel; // @synthesize buttonsViewModel=_buttonsViewModel;
@property(nonatomic) long long numberOfLinesForTitle; // @synthesize numberOfLinesForTitle=_numberOfLinesForTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool roundImage; // @synthesize roundImage=_roundImage;
@property(retain, nonatomic) NSString *mmHeadImageUsername; // @synthesize mmHeadImageUsername=_mmHeadImageUsername;
@property(retain, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
- (double)calculateHeightWithWidth:(double)arg1;
- (id)init;

@end

