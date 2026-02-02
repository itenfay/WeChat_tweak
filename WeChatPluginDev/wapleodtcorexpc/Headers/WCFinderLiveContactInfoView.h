//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WCFinderAuthInfoIconView, WCFinderContact, WCFinderLiveHeadImageLivingView;

@interface WCFinderLiveContactInfoView : UIView
{
    _Bool _showLiving;
    _Bool _showAuthorIcon;
    UILabel *_nickNameLabel;
    UILabel *_subTitleLabel;
    double _titlePaddingHeader;
    double _headerSize;
    WCFinderLiveHeadImageLivingView *_headLivingView;
    WCFinderAuthInfoIconView *_authInfoIconView;
    WCFinderContact *_contact;
    NSString *_subTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showAuthorIcon; // @synthesize showAuthorIcon=_showAuthorIcon;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) WCFinderLiveHeadImageLivingView *headLivingView; // @synthesize headLivingView=_headLivingView;
@property(nonatomic) double headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) double titlePaddingHeader; // @synthesize titlePaddingHeader=_titlePaddingHeader;
@property(nonatomic) _Bool showLiving; // @synthesize showLiving=_showLiving;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void)layoutSubviews;
- (void)initViews;
- (void)updateWithContact:(id)arg1 subTitle:(id)arg2 showAuthorIcon:(_Bool)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

