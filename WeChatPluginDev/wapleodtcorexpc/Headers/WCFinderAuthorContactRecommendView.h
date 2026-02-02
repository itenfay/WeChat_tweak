//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView, UILabel, WCFinderAuthInfoIconView, WCFinderAuthorContactRecommendViewStyle, WCFinderHeadImageView;

@interface WCFinderAuthorContactRecommendView : UIView
{
    WCFinderHeadImageView *_headImgView;
    RichTextView *_nameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    WCFinderAuthorContactRecommendViewStyle *_style;
    double _nsFWidth;
    UILabel *_followTextLabel;
    UIView *_followStateView;
    UILabel *_recommendTextLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *recommendTextLabel; // @synthesize recommendTextLabel=_recommendTextLabel;
@property(retain, nonatomic) UIView *followStateView; // @synthesize followStateView=_followStateView;
@property(retain, nonatomic) UILabel *followTextLabel; // @synthesize followTextLabel=_followTextLabel;
@property(nonatomic) double nsFWidth; // @synthesize nsFWidth=_nsFWidth;
@property(retain, nonatomic) WCFinderAuthorContactRecommendViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) RichTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutUI;
- (void)updateWithContact:(id)arg1 recommendReason:(id)arg2;
- (void)updateWithContact:(id)arg1;
- (void)setFWidth:(double)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

@end

