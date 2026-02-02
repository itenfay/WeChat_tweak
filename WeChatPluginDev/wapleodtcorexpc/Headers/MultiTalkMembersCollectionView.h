//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, NSArray, NSObject, NSString, UIButton, UIScrollView, UIViewPropertyAnimator;
@protocol MultiTalkMemberProtocol, MultiTalkMembersViewDelegate;

@interface MultiTalkMembersCollectionView : UIView
{
    _Bool isInMinimizeMode;
    _Bool _sharingScreenEnable;
    _Bool _isTalking;
    _Bool _isReloading;
    _Bool _isCameraOpen;
    _Bool _frontVirtualBackgroundOn;
    _Bool _backVirtualBackgroundOn;
    _Bool _isFrontCamera;
    int needShowContactInviteInfo;
    id <MultiTalkMembersViewDelegate> delegate;
    UIScrollView *_contentsView;
    NSArray *_itemsArray;
    NSObject<MultiTalkMemberProtocol> *_selectedMember;
    UIViewPropertyAnimator *_reloadViewPropertyAnimator;
    MMTimer *_waittingTimer;
    UIButton *_flipCameraButton;
    UIButton *_virtualBackgroundButton;
}

+ (id)selectedVoipDescriptButtonBackImage;
+ (id)normalVoipDescriptButtonBackImage;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) _Bool backVirtualBackgroundOn; // @synthesize backVirtualBackgroundOn=_backVirtualBackgroundOn;
@property(nonatomic) _Bool frontVirtualBackgroundOn; // @synthesize frontVirtualBackgroundOn=_frontVirtualBackgroundOn;
@property(nonatomic) _Bool isCameraOpen; // @synthesize isCameraOpen=_isCameraOpen;
@property(retain, nonatomic) UIButton *virtualBackgroundButton; // @synthesize virtualBackgroundButton=_virtualBackgroundButton;
@property(retain, nonatomic) UIButton *flipCameraButton; // @synthesize flipCameraButton=_flipCameraButton;
@property(retain, nonatomic) MMTimer *waittingTimer; // @synthesize waittingTimer=_waittingTimer;
@property(retain, nonatomic) UIViewPropertyAnimator *reloadViewPropertyAnimator; // @synthesize reloadViewPropertyAnimator=_reloadViewPropertyAnimator;
@property(nonatomic) _Bool isReloading; // @synthesize isReloading=_isReloading;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(retain, nonatomic) NSObject<MultiTalkMemberProtocol> *selectedMember; // @synthesize selectedMember=_selectedMember;
@property(nonatomic) _Bool sharingScreenEnable; // @synthesize sharingScreenEnable=_sharingScreenEnable;
@property(retain, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) UIScrollView *contentsView; // @synthesize contentsView=_contentsView;
@property(nonatomic) _Bool isInMinimizeMode; // @synthesize isInMinimizeMode;
@property(nonatomic) __weak id <MultiTalkMembersViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) int needShowContactInviteInfo; // @synthesize needShowContactInviteInfo;
- (int)getIfneedShowContactInviteInfo;
- (void)onBackgroundSelect;
- (void)onFlipCameraButtonClick;
- (void)changeIntoDefaultBigView;
- (void)hideButtonsForCameraMode;
- (void)checkIfSetVirtualBackgroundSelect;
- (struct CGSize)realContentsSize;
- (void)videoMembersInfoChanged;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)updateMuteState:(_Bool)arg1;
- (void)updateIpadOrientationAfterFrameChange;
- (void)reloadDataBeforeTalking;
- (void)reloadData;
- (void)reloadButtonsForVideoStatus:(_Bool)arg1;
- (void)layoutAfterBottomPanelChange;
- (void)multiTalkWindowChange:(_Bool)arg1;
- (_Bool)isInBigSharingScreenMode;
- (void)changeViewToTalkingMode;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)checkMemberWaitting;
- (void)onClickCell:(id)arg1;
- (void)reloadSelectedMember:(id)arg1;
- (void)reloadMembers;
- (void)layoutCameraRelativeBtn:(id)arg1;
- (void)layoutCells;
- (void)layoutCellsBeforeTalking;
- (void)layoutCellsOnTalking;
- (struct CGRect)cellFrameInContentViewWithIndex:(unsigned long long)arg1 membersCount:(unsigned long long)arg2 selectedIndex:(unsigned long long)arg3;
- (struct CGSize)selectedCellSizeForMembersCount:(unsigned long long)arg1;
- (struct CGSize)noramlCellSizeForMembersCount:(unsigned long long)arg1 hasSelection:(_Bool)arg2;
- (void)reloadScreenSharingAudienceWithEnable:(_Bool)arg1;
- (id)memberCellWithMember:(id)arg1;
- (void)onContentsViewTap:(id)arg1;
- (void)layoutContentsView;
- (unsigned long long)selectedIndex;
- (unsigned long long)indexForMemberCell:(id)arg1;
- (id)cellFromMemberUserName:(id)arg1;
- (void)checkVisableMembers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

