//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSSet, UIScrollView, UIView;
@protocol MultiTalkMemberProtocol, MultiTalkMembersViewDelegate;

@protocol MultiTalkMembersViewProtocol <NSObject>
@property(nonatomic) int needShowContactInviteInfo;
@property(nonatomic) _Bool isInMinimizeMode;
@property(nonatomic) __weak id <MultiTalkMembersViewDelegate> delegate;
@property(readonly, nonatomic) UIScrollView *contentsView;
- (void)reloadSelectedMember:(NSObject<MultiTalkMemberProtocol> *)arg1;
- (UIView *)memberCellWithMember:(NSObject<MultiTalkMemberProtocol> *)arg1;
- (NSObject<MultiTalkMemberProtocol> *)selectedMember;
- (void)reloadButtonsForVideoStatus:(_Bool)arg1;
- (void)hideButtonsForCameraMode;
- (void)changeIntoDefaultBigView;
- (void)checkIfSetVirtualBackgroundSelect;
- (struct CGSize)realContentsSize;
- (void)layoutAfterBottomPanelChange;
- (_Bool)isInBigSharingScreenMode;
- (void)videoMembersInfoChanged;
- (void)updateTalkingMembersWithUsersName:(NSSet *)arg1;
- (void)multiTalkWindowChange:(_Bool)arg1;
- (void)updateMuteState:(_Bool)arg1;
- (void)updateIpadOrientationAfterFrameChange;
- (void)changeViewToTalkingMode;
- (void)reloadDataBeforeTalking;
- (void)reloadData;
@end

