//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, NSMutableArray, NSString, WCFinderAuthInfo, WCFinderAuthInfoIconView, WCFinderContact, WCFinderMsgSessionBadgeLabel, WCFinderMsgSessionUserTagLabel;
@protocol WCFinderMsgSessionNicknameTailViewDelegate;

@interface WCFinderMsgSessionNicknameTailView : UIView
{
    WCFinderContact *_contact;
    id <WCFinderMsgSessionNicknameTailViewDelegate> _delegate;
    WCFinderAuthInfoIconView *_authInfoIconView;
    MMFinderLiveGlobalRankSignView *_rankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    WCFinderMsgSessionBadgeLabel *_badgeLabel;
    WCFinderMsgSessionUserTagLabel *_userTagLabel;
    NSMutableArray *_contentViewItems;
    WCFinderAuthInfo *_authInfo;
}

+ (id)createNewTailView;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) NSMutableArray *contentViewItems; // @synthesize contentViewItems=_contentViewItems;
@property(retain, nonatomic) WCFinderMsgSessionUserTagLabel *userTagLabel; // @synthesize userTagLabel=_userTagLabel;
@property(retain, nonatomic) WCFinderMsgSessionBadgeLabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *rankSignView; // @synthesize rankSignView=_rankSignView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(nonatomic) __weak id <WCFinderMsgSessionNicknameTailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)upateAuthInfoViewDisplay;
- (void)onLoadImageOK:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_initializeSubviews;
- (void)layoutSubviews;
- (void)updateContactExtInfo:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

