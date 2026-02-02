//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderPersonalContactModel;

@interface WCFinderPersonalCenterAvatarCellView : UICollectionViewCell
{
    WCFinderPersonalContactModel *_model;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UILabel *_fansCountLabel;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *fansCountLabel; // @synthesize fansCountLabel=_fansCountLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderPersonalContactModel *model; // @synthesize model=_model;
- (void)onUserMessageDidUpdate;
- (void)onContactDidUpdate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)updateFansCount;
- (void)updateContact;
- (void)update:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

