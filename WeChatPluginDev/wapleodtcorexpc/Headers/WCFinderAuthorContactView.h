//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView, UILabel, WCFinderAuthInfoIconView, WCFinderAuthorContactViewStyle, WCFinderHeadImageView;

@interface WCFinderAuthorContactView : UIView
{
    WCFinderHeadImageView *_headImgView;
    RichTextView *_nameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    WCFinderAuthorContactViewStyle *_style;
    UILabel *_authProfessionLabel;
    double _nsFWidth;
}

+ (double)viewHeightWithStyle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double nsFWidth; // @synthesize nsFWidth=_nsFWidth;
@property(retain, nonatomic) UILabel *authProfessionLabel; // @synthesize authProfessionLabel=_authProfessionLabel;
@property(retain, nonatomic) WCFinderAuthorContactViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) RichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutUI;
- (void)updateWithContact:(id)arg1;
- (void)setFWidth:(double)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

@end

