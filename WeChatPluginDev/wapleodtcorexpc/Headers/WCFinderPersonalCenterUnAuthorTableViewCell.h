//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, UnAuthFinder, WCFinderHeadImageView;

@interface WCFinderPersonalCenterUnAuthorTableViewCell : UICollectionViewCell
{
    WCFinderHeadImageView *_headerView;
    UILabel *_nicknameLabel;
    UILabel *_fansLabel;
    UIImageView *_arrowIconView;
    UIView *_redDot;
    UnAuthFinder *_authInfo;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) UnAuthFinder *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headerView; // @synthesize headerView=_headerView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)updateUnAuthFinder:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

