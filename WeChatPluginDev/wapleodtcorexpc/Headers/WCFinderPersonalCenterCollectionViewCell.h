//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMBadgeView, MMUIButton, UILabel, UIView, WCFinderPersonalCenterContactData, WCFinderPersonalCenterContactView, WCFinderPersonalCenterSidesButton;
@protocol WCFinderPersonalCenterCollectionViewCellDelegate;

@interface WCFinderPersonalCenterCollectionViewCell : UICollectionViewCell
{
    id <WCFinderPersonalCenterCollectionViewCellDelegate> _delegate;
    MMUIButton *_cameraBtn;
    WCFinderPersonalCenterContactData *_contactData;
    WCFinderPersonalCenterContactView *_contactView;
    UILabel *_createTipsLabel;
    MMUIButton *_liveBtn;
    UIView *_postSeparatorLine;
    MMBadgeView *_liveRedDotLabel;
    MMBadgeView *_cameraRedDotLabel;
    UIView *_arrangeBottomLine;
    WCFinderPersonalCenterSidesButton *_memberMsgBtn;
    WCFinderPersonalCenterSidesButton *_finderMsgBtn;
    WCFinderPersonalCenterSidesButton *_finderPrivateMsgBtn;
    WCFinderPersonalCenterSidesButton *_creatorCenterBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *creatorCenterBtn; // @synthesize creatorCenterBtn=_creatorCenterBtn;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *finderPrivateMsgBtn; // @synthesize finderPrivateMsgBtn=_finderPrivateMsgBtn;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *finderMsgBtn; // @synthesize finderMsgBtn=_finderMsgBtn;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *memberMsgBtn; // @synthesize memberMsgBtn=_memberMsgBtn;
@property(retain, nonatomic) UIView *arrangeBottomLine; // @synthesize arrangeBottomLine=_arrangeBottomLine;
@property(retain, nonatomic) MMBadgeView *cameraRedDotLabel; // @synthesize cameraRedDotLabel=_cameraRedDotLabel;
@property(retain, nonatomic) MMBadgeView *liveRedDotLabel; // @synthesize liveRedDotLabel=_liveRedDotLabel;
@property(retain, nonatomic) UIView *postSeparatorLine; // @synthesize postSeparatorLine=_postSeparatorLine;
@property(retain, nonatomic) MMUIButton *liveBtn; // @synthesize liveBtn=_liveBtn;
@property(retain, nonatomic) UILabel *createTipsLabel; // @synthesize createTipsLabel=_createTipsLabel;
@property(retain, nonatomic) WCFinderPersonalCenterContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) WCFinderPersonalCenterContactData *contactData; // @synthesize contactData=_contactData;
@property(retain, nonatomic) MMUIButton *cameraBtn; // @synthesize cameraBtn=_cameraBtn;
@property(nonatomic) __weak id <WCFinderPersonalCenterCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportExposeAfterSetupSubviews;
- (_Bool)checkAccountLogout;
- (void)clickCreatorCenterBtn;
- (void)clickLive;
- (void)clickCamera;
- (void)clickPrivateMSGAction;
- (void)clickMentionAction;
- (void)clickMemberMsgAction;
@property(readonly, nonatomic) UIView *contactContainer;
- (void)setupSubviews;
- (_Bool)isShowRedDot;
- (id)msgButtonAssibilityLabelWithMainString:(id)arg1 msgCount:(long long)arg2;
- (void)applyLayout;
- (void)setupContact:(id)arg1;
- (void)setupLiveBtn:(long long)arg1;
- (id)createActionButton:(id)arg1 action:(SEL)arg2;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)layoutElements;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)contact;
- (id)finderPrepare;
- (id)initWithFrame:(struct CGRect)arg1;

@end

