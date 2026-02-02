//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, WCFinderContact, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;

@interface WCFinderNotifyCenterTabPageVC
{
    _Bool _showMentionSwitchEntry;
    WCFinderRedDotTipsShowInfo *_rightEntryRedDotShowInfo;
    WCFinderContact *_authorContact;
    NSArray *_childModelArray;
    long long _unreadLikeCount;
    long long _unreadCommentCount;
    long long _unreadNotifyCount;
    long long _unreadFollowCount;
    double _enterTime;
    WCFinderRedDotCtrlInfo *_redDotCtrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo; // @synthesize redDotCtrlInfo=_redDotCtrlInfo;
@property(nonatomic) _Bool showMentionSwitchEntry; // @synthesize showMentionSwitchEntry=_showMentionSwitchEntry;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) long long unreadFollowCount; // @synthesize unreadFollowCount=_unreadFollowCount;
@property(nonatomic) long long unreadNotifyCount; // @synthesize unreadNotifyCount=_unreadNotifyCount;
@property(nonatomic) long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) long long unreadLikeCount; // @synthesize unreadLikeCount=_unreadLikeCount;
@property(retain, nonatomic) NSArray *childModelArray; // @synthesize childModelArray=_childModelArray;
@property(retain, nonatomic) WCFinderContact *authorContact; // @synthesize authorContact=_authorContact;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *rightEntryRedDotShowInfo; // @synthesize rightEntryRedDotShowInfo=_rightEntryRedDotShowInfo;
- (unsigned long long)tabIndexWithTabType:(unsigned long long)arg1;
- (void)onClickMentionSwitchAction;
- (void)configureTabPageHeaderView:(id)arg1;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(_Bool)arg3;
- (void)setTabRedDotForType:(unsigned long long)arg1 unreadCount:(unsigned long long)arg2;
- (void)setupRedDot;
- (unsigned long long)defaultSelectType;
- (id)createTabModelWithTabType:(unsigned long long)arg1 tabTitle:(id)arg2 bindRedDotPath:(id)arg3;
- (void)loadChildTabModel;
- (void)loadUnreadCount;
- (void)setUpRightNav;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

@end

