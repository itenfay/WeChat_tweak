//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatroomRecInfo, GCBulletMsgFlowView, NSMutableArray, NSString;

@interface GCRecommendGroupCellModel
{
    _Bool _isLocked;
    _Bool _canOnlooker;
    _Bool _isFirst;
    _Bool _canJoin;
    NSString *_userIconUrl;
    NSMutableArray *_conditionArray;
    ChatroomRecInfo *_chatroomRecInfo;
    NSMutableArray *_bulletMsgList;
    GCBulletMsgFlowView *_bulletFlowView;
}

+ (id)getEmptyStateCellModelWithSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GCBulletMsgFlowView *bulletFlowView; // @synthesize bulletFlowView=_bulletFlowView;
@property(retain, nonatomic) NSMutableArray *bulletMsgList; // @synthesize bulletMsgList=_bulletMsgList;
@property(retain, nonatomic) ChatroomRecInfo *chatroomRecInfo; // @synthesize chatroomRecInfo=_chatroomRecInfo;
@property(nonatomic) _Bool canJoin; // @synthesize canJoin=_canJoin;
@property(retain, nonatomic) NSMutableArray *conditionArray; // @synthesize conditionArray=_conditionArray;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) NSString *userIconUrl; // @synthesize userIconUrl=_userIconUrl;
@property(nonatomic) _Bool canOnlooker; // @synthesize canOnlooker=_canOnlooker;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
- (double)condtionGroupMaxWidthForWidth:(double)arg1;
- (unsigned long long)actionStatusForAutoJoin:(_Bool)arg1;
- (void)handleDidSelect;
- (void)openChatRoom:(_Bool)arg1;
- (id)rightBtnText;
- (double)rightSpace;
- (struct CGSize)cellSizeForCollectionView:(id)arg1;
- (double)tagLineViewHeight:(double)arg1;
- (double)conditionViewHeight:(double)arg1;
- (double)widthForTag:(id)arg1;
- (double)widthForCondition:(id)arg1;
- (Class)bindCellClass;
- (void)configureReportModel:(id)arg1;

@end

