//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderEventInfo, MMUIButton, MMWebImageView, NSString, UIView, WCFinderEventHeaderView;
@protocol WCFinderEventPosterViewControllerDelegate;

@interface WCFinderEventPosterViewController
{
    id <WCFinderEventPosterViewControllerDelegate> _delegate;
    unsigned long long _actionType;
    NSString *_flowId;
    NSString *_visitId;
    FinderEventInfo *_eventInfo;
    UIView *_eventBackgroundContainer;
    MMWebImageView *_backgroundImageView;
    UIView *_gradientView;
    WCFinderEventHeaderView *_headerView;
    MMUIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) WCFinderEventHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *eventBackgroundContainer; // @synthesize eventBackgroundContainer=_eventBackgroundContainer;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(copy, nonatomic) NSString *visitId; // @synthesize visitId=_visitId;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) __weak id <WCFinderEventPosterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)arg1;
- (void)onEventHeaderClickDescriptionContactAction:(id)arg1;
- (void)showDescriptionViewSheet;
- (void)showDescriptionJumpInfoSheet;
- (void)onEventHeaderClickDescriptionDetailAction:(id)arg1;
- (void)onEventHeaderClickAuthorInfoAction:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)actionButtonDidClick;
- (void)onClickBackItem;
- (void)genExitButton;
- (void)genJoinButton;
- (_Bool)useTransparentNavibar;
- (void)updateUI;
- (void)viewDidLoad;
- (id)initWithEventInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

