//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiTalkBottomOperatePanel, MultiTalkScreenSharingAudienceView, NSObject, UIView, WCVideoOpenglRender;
@protocol MultiTalkMemberProtocol, MultiTalkScreenSharingAudienceViewControllerDelegate;

@interface MultiTalkScreenSharingAudienceViewController
{
    _Bool _isLandscapeModeAllowed;
    _Bool _isEnable;
    _Bool _shouldHideBlurAfterAnimation;
    id <MultiTalkScreenSharingAudienceViewControllerDelegate> _delegate;
    id _videoMember;
    MultiTalkScreenSharingAudienceView *_mainView;
    UIView *_bottomOperationPanelContainerView;
    MultiTalkBottomOperatePanel *_bottomOperatePanel;
    NSObject<MultiTalkMemberProtocol> *_selectedMember;
    WCVideoOpenglRender *_selectedMemberVideoRender;
    UIView *_selectedMemberCell;
    long long _lastInterfaceOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastInterfaceOrientation; // @synthesize lastInterfaceOrientation=_lastInterfaceOrientation;
@property(nonatomic) _Bool shouldHideBlurAfterAnimation; // @synthesize shouldHideBlurAfterAnimation=_shouldHideBlurAfterAnimation;
@property(retain, nonatomic) UIView *selectedMemberCell; // @synthesize selectedMemberCell=_selectedMemberCell;
@property(retain, nonatomic) WCVideoOpenglRender *selectedMemberVideoRender; // @synthesize selectedMemberVideoRender=_selectedMemberVideoRender;
@property(retain, nonatomic) NSObject<MultiTalkMemberProtocol> *selectedMember; // @synthesize selectedMember=_selectedMember;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(retain, nonatomic) MultiTalkBottomOperatePanel *bottomOperatePanel; // @synthesize bottomOperatePanel=_bottomOperatePanel;
@property(retain, nonatomic) UIView *bottomOperationPanelContainerView; // @synthesize bottomOperationPanelContainerView=_bottomOperationPanelContainerView;
@property(retain, nonatomic) MultiTalkScreenSharingAudienceView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) _Bool isLandscapeModeAllowed; // @synthesize isLandscapeModeAllowed=_isLandscapeModeAllowed;
@property(retain, nonatomic) id videoMember; // @synthesize videoMember=_videoMember;
@property(nonatomic) __weak id <MultiTalkScreenSharingAudienceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sharingScreenAudienceViewDidOrientationManually:(id)arg1;
- (void)sharingScreenAudienceView:(id)arg1 didTapToChangeOperationViewsAppearance:(_Bool)arg2;
- (void)sharingScreenAudienceViewDidClose:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setupContentInterfaceOrientation:(long long)arg1 width:(double)arg2 height:(double)arg3;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)dismisswithSelectedMember:(id)arg1 selectedMemberVideoRender:(id)arg2 selectedMemberCell:(id)arg3 videoMember:(id)arg4 shouldHideBlurAfterAnimation:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentInViewController:(id)arg1 withSelectedMember:(id)arg2 selectedMemberVideoRender:(id)arg3 selectedMemberCell:(id)arg4 videoMember:(id)arg5 shouldHideBlurAfterAnimation:(_Bool)arg6 bottomOperatePanel:(id)arg7;
- (void)reloadIfNeed;
- (void)reloadWithScene:(unsigned long long)arg1;
- (void)reloadBottomOperatePanelIfNeed;
- (void)reloadMainViewIfNeed;
- (void)handleScreenEdgePanGesture:(id)arg1;

@end

