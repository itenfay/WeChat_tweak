//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FavAttributeCPLabel, UILabel, WCFinderAuthInfoIconView, WCFinderContact, WCFinderHeadImageView, WCFinderLiveNowView, WCFinderMaskButton;
@protocol WCFinderFeedStaticCoverContactViewDelegate;

@interface WCFinderFeedStaticCoverContactView : UIView
{
    _Bool _alwaysHideLiveNowView;
    id <WCFinderFeedStaticCoverContactViewDelegate> _delegate;
    WCFinderAuthInfoIconView *_authInfoIconView;
    WCFinderHeadImageView *_avatarImageView;
    FavAttributeCPLabel *_nicknameLabel;
    WCFinderLiveNowView *_liveNowView;
    WCFinderMaskButton *_privateMsgBtn;
    UILabel *_reasonLabel;
    unsigned long long _styleMode;
    WCFinderContact *_contact;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long styleMode; // @synthesize styleMode=_styleMode;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) WCFinderMaskButton *privateMsgBtn; // @synthesize privateMsgBtn=_privateMsgBtn;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) FavAttributeCPLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(nonatomic) _Bool alwaysHideLiveNowView; // @synthesize alwaysHideLiveNowView=_alwaysHideLiveNowView;
@property(nonatomic) __weak id <WCFinderFeedStaticCoverContactViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickPrivateMsgBtn:(id)arg1;
- (void)switchUIMode:(unsigned long long)arg1;
- (void)adjustMargin;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateLayout;
- (double)calNickNameMaxWidth:(id)arg1 isTaskBarStyle:(_Bool)arg2;
- (void)renderNickNameLabel:(id)arg1 highlightWords:(id)arg2;
- (void)useTaskBarStyle;
- (void)updateContentWithContact:(id)arg1 highlightWords:(id)arg2 isShowPrivateMsgStyle:(_Bool)arg3 displayReason:(id)arg4;
- (void)updateContentWithContact:(id)arg1 highlightWords:(id)arg2;
- (void)updateContentWithContact:(id)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

