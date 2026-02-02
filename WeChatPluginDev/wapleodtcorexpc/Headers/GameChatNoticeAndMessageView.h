//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GCCollectionViewManager, GameCenterMessageRedPointInfo, GameChatMessageCellModel, GameLifeConversationCellDataSource, NSArray, NSDictionary, NSString, UILabel;

@interface GameChatNoticeAndMessageView : UIView
{
    _Bool _onlyPersonMessage;
    unsigned int _sourceScene;
    NSDictionary *_extReportInfoDic;
    GCCollectionViewManager *_messageManager;
    GameCenterMessageRedPointInfo *_redPointInfo;
    GameChatMessageCellModel *_interActModel;
    GameChatMessageCellModel *_noticeModel;
    GameLifeConversationCellDataSource *_cellDataSource;
    NSArray *_chatModelArray;
    UILabel *_allLabel;
    UILabel *_emptyLabel;
}

+ (double)dynamicMessageViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UILabel *allLabel; // @synthesize allLabel=_allLabel;
@property(retain, nonatomic) NSArray *chatModelArray; // @synthesize chatModelArray=_chatModelArray;
@property(retain, nonatomic) GameLifeConversationCellDataSource *cellDataSource; // @synthesize cellDataSource=_cellDataSource;
@property(retain, nonatomic) GameChatMessageCellModel *noticeModel; // @synthesize noticeModel=_noticeModel;
@property(retain, nonatomic) GameChatMessageCellModel *interActModel; // @synthesize interActModel=_interActModel;
@property(retain, nonatomic) GameCenterMessageRedPointInfo *redPointInfo; // @synthesize redPointInfo=_redPointInfo;
@property(retain, nonatomic) GCCollectionViewManager *messageManager; // @synthesize messageManager=_messageManager;
@property(nonatomic) _Bool onlyPersonMessage; // @synthesize onlyPersonMessage=_onlyPersonMessage;
@property(copy, nonatomic) NSDictionary *extReportInfoDic; // @synthesize extReportInfoDic=_extReportInfoDic;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
- (void)unregisterExtension;
- (void)dealloc;
- (void)onConversationUpdated;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)onGameLifeConversationLoadMoreResultError;
- (void)onGameLifeConversationLoadMoreResultChanged:(_Bool)arg1;
- (void)onGameLifeConversationLoadResultError;
- (void)onGameLifeConversationLoadResultChanged:(unsigned long long)arg1 hasMore:(_Bool)arg2;
- (void)reportConversationUIExposure;
- (void)reportCellModel:(id)arg1 actionId:(int)arg2;
- (void)updateNoticeInterActModelUpdateTime:(id)arg1;
- (_Bool)updateInteractNoticeRedPoint:(_Bool)arg1;
- (id)getGameChatMessageModelArray;
- (void)reportFixItem12909:(id)arg1 withPositionId:(unsigned int)arg2 iActionId:(long long)arg3;
- (id)getReportVc;
- (void)updateChatMessageModel;
- (void)onAllLabelTaped;
- (void)loadAllUnreadAndMinCntContact;
- (void)setNoticeAndInteractMoelReport:(id)arg1 withPostion:(unsigned int)arg2;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

