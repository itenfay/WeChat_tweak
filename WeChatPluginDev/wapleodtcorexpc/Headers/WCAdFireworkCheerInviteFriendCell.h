//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdFireworkCheerInviteFriendView, WCDataItem;
@protocol WCAdFireworkCheerInviteFriendCellDelegate;

@interface WCAdFireworkCheerInviteFriendCell
{
    id <WCAdFireworkCheerInviteFriendCellDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdFireworkCheerInviteFriendView *_adFireworkCheerInviteFriendView;
}

+ (double)defaultHeight;
+ (id)defaultIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFireworkCheerInviteFriendView *adFireworkCheerInviteFriendView; // @synthesize adFireworkCheerInviteFriendView=_adFireworkCheerInviteFriendView;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdFireworkCheerInviteFriendCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAdInviteButtonClick:(id)arg1;
- (void)initFireworkCheerInviteFriendView;
- (void)updateCellView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

