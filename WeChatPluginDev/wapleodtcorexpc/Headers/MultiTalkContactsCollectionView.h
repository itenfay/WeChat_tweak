//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MultiTalkScreenSharingAudienceBackgroundView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UILabel, UIScrollView;
@protocol MultiTalkMembersViewDelegate;

@interface MultiTalkContactsCollectionView : UIView
{
    _Bool isInMinimizeMode;
    _Bool _m_doingAnimation;
    _Bool _m_hasAnimationTodo;
    _Bool _m_checkVisibleAfterAnimation;
    _Bool _m_hasOriChangeUpdateTodo;
    _Bool _m_isContentViewScroll;
    _Bool _m_hasScrolling;
    _Bool _m_hasScrollToast;
    _Bool _frontVirtualBackgroundOn;
    _Bool _backVirtualBackgroundOn;
    _Bool _isFrontCamera;
    int needShowContactInviteInfo;
    int _m_mode;
    id <MultiTalkMembersViewDelegate> delegate;
    UIView *m_bigCellBackgroundView;
    UIView *m_bigCellView;
    UIScrollView *_m_contentScrollView;
    NSMutableDictionary *_m_contactViewDic;
    NSMutableDictionary *_m_contactViewCacheDic;
    MMTimer *_m_waittingTimer;
    long long _m_currOrientationType;
    NSMutableArray *_m_lastMember;
    NSMutableArray *_m_currentMember;
    NSMutableSet *_lastVisibleUsrnameSet;
    NSMutableSet *_lastVisibleMemberIdSet;
    NSMutableSet *_lastVisibleUserIsVideoOrScreen;
    MultiTalkScreenSharingAudienceBackgroundView *_bigSharingScreenBackgroundView;
    UIView *_bigSharingScreenView;
    unsigned long long _m_maxMultiTalkMemCount;
    double _lastCheckContentOffsetY;
    UILabel *_userNameLabel;
    UIButton *_flipCameraButton;
    UIButton *_virtualBackgroundButton;
    struct CGSize _multiTalkCellSize;
    struct CGSize _currentSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) _Bool backVirtualBackgroundOn; // @synthesize backVirtualBackgroundOn=_backVirtualBackgroundOn;
@property(nonatomic) _Bool frontVirtualBackgroundOn; // @synthesize frontVirtualBackgroundOn=_frontVirtualBackgroundOn;
@property(retain, nonatomic) UIButton *virtualBackgroundButton; // @synthesize virtualBackgroundButton=_virtualBackgroundButton;
@property(retain, nonatomic) UIButton *flipCameraButton; // @synthesize flipCameraButton=_flipCameraButton;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) struct CGSize currentSize; // @synthesize currentSize=_currentSize;
@property(nonatomic) double lastCheckContentOffsetY; // @synthesize lastCheckContentOffsetY=_lastCheckContentOffsetY;
@property(nonatomic) unsigned long long m_maxMultiTalkMemCount; // @synthesize m_maxMultiTalkMemCount=_m_maxMultiTalkMemCount;
@property(nonatomic) struct CGSize multiTalkCellSize; // @synthesize multiTalkCellSize=_multiTalkCellSize;
@property(retain, nonatomic) UIView *bigSharingScreenView; // @synthesize bigSharingScreenView=_bigSharingScreenView;
@property(retain, nonatomic) MultiTalkScreenSharingAudienceBackgroundView *bigSharingScreenBackgroundView; // @synthesize bigSharingScreenBackgroundView=_bigSharingScreenBackgroundView;
@property(retain, nonatomic) NSMutableSet *lastVisibleUserIsVideoOrScreen; // @synthesize lastVisibleUserIsVideoOrScreen=_lastVisibleUserIsVideoOrScreen;
@property(retain, nonatomic) NSMutableSet *lastVisibleMemberIdSet; // @synthesize lastVisibleMemberIdSet=_lastVisibleMemberIdSet;
@property(retain, nonatomic) NSMutableSet *lastVisibleUsrnameSet; // @synthesize lastVisibleUsrnameSet=_lastVisibleUsrnameSet;
@property(retain, nonatomic) NSMutableArray *m_currentMember; // @synthesize m_currentMember=_m_currentMember;
@property(retain, nonatomic) NSMutableArray *m_lastMember; // @synthesize m_lastMember=_m_lastMember;
@property(nonatomic) int m_mode; // @synthesize m_mode=_m_mode;
@property(nonatomic) long long m_currOrientationType; // @synthesize m_currOrientationType=_m_currOrientationType;
@property(nonatomic) _Bool m_hasScrollToast; // @synthesize m_hasScrollToast=_m_hasScrollToast;
@property(nonatomic) _Bool m_hasScrolling; // @synthesize m_hasScrolling=_m_hasScrolling;
@property(nonatomic) _Bool m_isContentViewScroll; // @synthesize m_isContentViewScroll=_m_isContentViewScroll;
@property(nonatomic) _Bool m_hasOriChangeUpdateTodo; // @synthesize m_hasOriChangeUpdateTodo=_m_hasOriChangeUpdateTodo;
@property(nonatomic) _Bool m_checkVisibleAfterAnimation; // @synthesize m_checkVisibleAfterAnimation=_m_checkVisibleAfterAnimation;
@property(nonatomic) _Bool m_hasAnimationTodo; // @synthesize m_hasAnimationTodo=_m_hasAnimationTodo;
@property(nonatomic) _Bool m_doingAnimation; // @synthesize m_doingAnimation=_m_doingAnimation;
@property(retain, nonatomic) MMTimer *m_waittingTimer; // @synthesize m_waittingTimer=_m_waittingTimer;
@property(retain, nonatomic) NSMutableDictionary *m_contactViewCacheDic; // @synthesize m_contactViewCacheDic=_m_contactViewCacheDic;
@property(retain, nonatomic) NSMutableDictionary *m_contactViewDic; // @synthesize m_contactViewDic=_m_contactViewDic;
@property(retain, nonatomic) UIScrollView *m_contentScrollView; // @synthesize m_contentScrollView=_m_contentScrollView;
@property(nonatomic) int needShowContactInviteInfo; // @synthesize needShowContactInviteInfo;
@property(retain, nonatomic) UIView *m_bigCellView; // @synthesize m_bigCellView;
@property(retain, nonatomic) UIView *m_bigCellBackgroundView; // @synthesize m_bigCellBackgroundView;
@property(nonatomic) _Bool isInMinimizeMode; // @synthesize isInMinimizeMode;
@property(nonatomic) __weak id <MultiTalkMembersViewDelegate> delegate; // @synthesize delegate;
- (_Bool)isMultiTalkCellVisible:(id)arg1;
- (_Bool)checkVisibleMultiTalkCells;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (int)getIfneedShowContactInviteInfo;
- (void)setMultitalkCollectionViewDoingAnimatioin:(_Bool)arg1;
- (_Bool)getMultitalkCollectionViewDoingAnimatioin;
- (void)onClickMultiTalkContactCellBigview;
- (void)hideButtonsForCameraMode;
- (void)onBackgroundSelect;
- (void)onFlipCameraButtonClick;
- (void)checkIfSetVirtualBackgroundSelect;
- (void)checkToShowBigView;
- (void)onClickMultiTalkContactCellWithContact:(id)arg1 render:(id)arg2;
- (double)operationPanelDisplayHeight:(int)arg1;
- (id)memberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)memberCountBeforeTalking;
- (id)memberInviteMeBeforeTalking;
- (void)checkIfOnePerson;
- (_Bool)isSharingScreenForUser:(id)arg1;
- (_Bool)isVideoOnForUser:(id)arg1;
- (id)renderForUsername:(id)arg1;
- (id)memberOfIndex:(unsigned long long)arg1;
- (unsigned long long)totalMemberCount;
- (struct CGSize)bigCellViewSize;
- (void)updateScrollViewContentSize;
- (id)getLastValidContactCell;
- (id)getCellByUserName:(id)arg1 center:(struct CGPoint)arg2;
- (id)getCurrentCellByUserName:(id)arg1;
- (struct CGRect)layoutInIphoneAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (struct CGRect)layoutInIpadAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (struct CGRect)layoutAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (struct CGSize)getMultiTalkCellSizeForTotalCount:(unsigned long long)arg1;
- (double)alphaAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (id)backgroundColorAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)waittingTimerCheck;
- (void)initWaittingTimer;
- (void)updateContentLayout;
- (void)layoutSubviews;
- (id)calculateExitUsernameSetWithCurrentSet:(id)arg1;
- (id)calculateCurrentUsernameSet;
- (void)updateCell:(id)arg1 withMember:(id)arg2;
- (void)checkAllMemberCellHidden;
- (void)moveChangeMember;
- (void)placeCellToView;
- (void)removeExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)moveExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)showBusyLabelWithExitUsernameSet:(id)arg1;
- (void)doChangeAnimation;
- (void)doExitAnimationWithExitUsernameSet:(id)arg1;
- (void)updateCellLayoutInIpadForOriChanged;
- (void)updateLastMember;
- (void)updateCurrentMember;
- (id)getSharingScreenMemberWithUserName:(id)arg1;
- (void)updateBigSharingScreenUserStateWithUser:(id)arg1 andRender:(id)arg2;
- (_Bool)isInBigSharingScreenMode;
- (void)videoMembersInfoChanged;
- (void)reloadData;
- (struct CGSize)realContentsSize;
- (void)updateScrollViewHeight;
- (void)changeViewToTalkingMode;
- (void)reloadOtherMemberBeforeTalking;
- (void)reloadViewInviteMeBeforeTalking;
- (void)reloadDataBeforeTalking;
- (void)reloadSelectedMember:(id)arg1;
- (id)memberCellWithMember:(id)arg1;
- (id)selectedMember;
- (void)reloadButtonsForVideoStatus:(_Bool)arg1;
- (void)layoutAfterBottomPanelChange;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)multiTalkWindowChange:(_Bool)arg1;
- (void)updateMuteState:(_Bool)arg1;
- (void)updateIpadOrientationAfterFrameChange;
- (void)updateContentScrollViewHidden:(_Bool)arg1 Animating:(_Bool)arg2;
- (void)bigSharingScreenViewTransToCellsView;
- (void)bigViewTransToCellsView;
- (void)onSingleTap;
- (void)initBigSharingScreenBackgroundView;
- (void)initBigCellBackground;
- (void)initContentScrollView;
- (double)getContentScrollViewHeight;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIScrollView *contentsView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

