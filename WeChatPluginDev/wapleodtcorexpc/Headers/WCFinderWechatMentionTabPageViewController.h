//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCFinderTabPageModel;

@interface WCFinderWechatMentionTabPageViewController
{
    NSMutableArray *_childModelArray;
    WCFinderTabPageModel *_likeTabPageModel;
    WCFinderTabPageModel *_commentTabPageModel;
    unsigned long long _selectedTab;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(retain, nonatomic) WCFinderTabPageModel *commentTabPageModel; // @synthesize commentTabPageModel=_commentTabPageModel;
@property(retain, nonatomic) WCFinderTabPageModel *likeTabPageModel; // @synthesize likeTabPageModel=_likeTabPageModel;
@property(retain, nonatomic) NSMutableArray *childModelArray; // @synthesize childModelArray=_childModelArray;
- (void)onClickMentionSwitchAction;
- (void)clearCurrentTabRedDot;
- (void)switchTabPageViewControllerFrom:(id)arg1 to:(id)arg2 isTriggerByUser:(_Bool)arg3;
- (void)setupRedDot;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setUpRightNav;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)initWithSelectedTabType:(unsigned long long)arg1;

@end

