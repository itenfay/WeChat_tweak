//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileTopicView, BrandProfileTopicViewModel, NSString;
@protocol BrandProfileMsgTabViewControllerDelegate;

@interface BrandProfileMsgTabViewController
{
    id <BrandProfileMsgTabViewControllerDelegate> _msgTabDelegate;
    BrandProfileTopicView *_topicView;
    BrandProfileTopicViewModel *_topicViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileTopicViewModel *topicViewModel; // @synthesize topicViewModel=_topicViewModel;
@property(retain, nonatomic) BrandProfileTopicView *topicView; // @synthesize topicView=_topicView;
@property(nonatomic) __weak id <BrandProfileMsgTabViewControllerDelegate> msgTabDelegate; // @synthesize msgTabDelegate=_msgTabDelegate;
- (void)onUnfoldButtonClicked;
- (void)onTopicButtonClicked:(id)arg1;
- (void)reloadTopicViewWithInfoList:(id)arg1;
- (void)configTableView;
- (id)brandProfileCeilingTableView;
- (id)tabTitle;
- (int)cgiRespFuncFlag;
- (id)cgiRespMessageList:(id)arg1;
- (int)cgiReqActionType;
- (unsigned long long)tabType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

