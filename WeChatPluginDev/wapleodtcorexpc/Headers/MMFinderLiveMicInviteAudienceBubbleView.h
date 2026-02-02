//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePromoteDisplayLeaseToken, MMLiveTaskId, NSData, NSString, UIButton, UIImageView, UILabel;
@protocol MMFinderLiveMicInviteAudienceBubbleViewDelegate;

@interface MMFinderLiveMicInviteAudienceBubbleView : UIView
{
    id <MMFinderLiveMicInviteAudienceBubbleViewDelegate> _actionDelegate;
    unsigned long long _micSeatId;
    NSData *_inviteMicBuffer;
    MMFinderLivePromoteDisplayLeaseToken *_displayLeaseToken;
    MMLiveTaskId *_taskId;
    UIView *_containerView;
    UIImageView *_micIconView;
    UILabel *_titleLabel;
    UIButton *_acceptButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *micIconView; // @synthesize micIconView=_micIconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLivePromoteDisplayLeaseToken *displayLeaseToken; // @synthesize displayLeaseToken=_displayLeaseToken;
@property(retain, nonatomic) NSData *inviteMicBuffer; // @synthesize inviteMicBuffer=_inviteMicBuffer;
@property(nonatomic) unsigned long long micSeatId; // @synthesize micSeatId=_micSeatId;
@property(nonatomic) __weak id <MMFinderLiveMicInviteAudienceBubbleViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onPromoteDisplayLeaseViewAttached:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)onTapAcceptButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

