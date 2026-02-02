//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTaskId, MMUILabel, UIImageView;

@interface MMFinderLiveKTVSeatInviteView : UIView
{
    MMLiveTaskId *_taskId;
    UIView *_inviteRoundView;
    UIImageView *_inviteIconView;
    MMUILabel *_inviteLabel;
}

+ (double)preferHeight;
+ (double)preferWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *inviteLabel; // @synthesize inviteLabel=_inviteLabel;
@property(retain, nonatomic) UIImageView *inviteIconView; // @synthesize inviteIconView=_inviteIconView;
@property(retain, nonatomic) UIView *inviteRoundView; // @synthesize inviteRoundView=_inviteRoundView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)refreshUI;
- (void)updateInviteLabelOrigin;
- (void)updateInviteLabelText;
- (void)layoutInviteLabel;
- (void)layoutInviteIconView;
- (void)layoutInviteRoundBtn;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

