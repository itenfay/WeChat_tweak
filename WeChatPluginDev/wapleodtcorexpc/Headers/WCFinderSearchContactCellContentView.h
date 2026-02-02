//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FavAttributeCPLabel, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface WCFinderSearchContactCellContentView : UIView
{
    _Bool _useDarkStyle;
    UIView *_avatarContainer;
    WCFinderHeadImageView *_avatarImageView;
    UIImageView *_liveCircle;
    UILabel *_liveTipsLabel;
    FavAttributeCPLabel *_nickNameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_brandTipsLabel;
    UILabel *_followLabel;
    UILabel *_friendFollowCountLabel;
    FavAttributeCPLabel *_authInfoLabel;
    FavAttributeCPLabel *_signatureLabel;
    UIView *_separatorLine;
    UIView *_accessibleView;
    CDUnknownBlockType _liveClickBlock;
}

+ (id)replaceNewlineCharacter2WhitespaceCharacter:(id)arg1;
+ (double)calcuateHeight:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType liveClickBlock; // @synthesize liveClickBlock=_liveClickBlock;
@property(retain, nonatomic) UIView *accessibleView; // @synthesize accessibleView=_accessibleView;
@property(nonatomic) _Bool useDarkStyle; // @synthesize useDarkStyle=_useDarkStyle;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) FavAttributeCPLabel *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) FavAttributeCPLabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) UILabel *friendFollowCountLabel; // @synthesize friendFollowCountLabel=_friendFollowCountLabel;
@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) UILabel *brandTipsLabel; // @synthesize brandTipsLabel=_brandTipsLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) FavAttributeCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *liveTipsLabel; // @synthesize liveTipsLabel=_liveTipsLabel;
@property(retain, nonatomic) UIImageView *liveCircle; // @synthesize liveCircle=_liveCircle;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *avatarContainer; // @synthesize avatarContainer=_avatarContainer;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)currentStyleColor:(id)arg1;
- (void)flexLayoutSubviews;
- (void)updateSearchInfo:(id)arg1 params:(id)arg2;
- (void)updateSearchInfo:(id)arg1 isShowSeparatorLine:(_Bool)arg2 shouldHideFollow:(_Bool)arg3 useRoundHeader:(_Bool)arg4;
- (void)prepareForReuse;
- (void)onLiveCircleDidClick;
- (void)setClickBlock:(CDUnknownBlockType)arg1;
- (void)initSubview;
- (id)initWithDarkStyle:(_Bool)arg1;

@end

