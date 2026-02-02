//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol MsgNewImgDataLogicDelegate;

@interface MsgNewImgDataLogic
{
    NSString *m_nsChatName;
    unsigned int m_uiLeastLoadCount;
    unsigned int m_firstMsgCreateTime;
    unsigned int m_lastMsgCreateTime;
    unsigned int m_cursorPreCreateTime;
    unsigned int m_cursourNextCreateTime;
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrPreMsg;
    NSMutableArray *m_arrNextMsg;
    NSMutableArray *m_arrSimpleMsg;
    NSString *m_searchText;
    NSMutableArray *m_searchMsgArr;
    _Bool m_preEnd;
    _Bool m_nextEnd;
    _Bool _m_bLoading;
    _Bool _m_bNeedFullMessage;
    _Bool _m_bDestroy;
    NSString *_m_enterpriseBrandUserName;
    id <MsgNewImgDataLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bDestroy; // @synthesize m_bDestroy=_m_bDestroy;
@property(nonatomic) _Bool m_bNeedFullMessage; // @synthesize m_bNeedFullMessage=_m_bNeedFullMessage;
@property(nonatomic) __weak id <MsgNewImgDataLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_bLoading; // @synthesize m_bLoading=_m_bLoading;
@property(retain, nonatomic) NSString *m_enterpriseBrandUserName; // @synthesize m_enterpriseBrandUserName=_m_enterpriseBrandUserName;
@property(nonatomic) _Bool m_nextEnd; // @synthesize m_nextEnd;
@property(nonatomic) _Bool m_preEnd; // @synthesize m_preEnd;
- (id)getNextCurMsg:(id)arg1;
- (unsigned int)getIndexForSimpleMsg:(id)arg1;
- (void)removeSearchMsgByLocalID:(unsigned int)arg1;
- (void)removeMsgByLocalID:(unsigned int)arg1;
- (id)getSimpleMsgArray;
- (void)loadPre:(_Bool)arg1 loadNext:(_Bool)arg2;
- (id)asyncLoadImg:(_Bool)arg1;
- (unsigned int)getFirstDateOfASection:(unsigned int)arg1 interval:(double *)arg2;
- (_Bool)isMsgMatch:(id)arg1;
- (id)getMsgArray;
- (id)getSimpleMsgFrom:(id)arg1;
- (void)updateMsgArray;
- (void)resetWithCurrentMsg:(id)arg1;
- (void)setMinSerachMsgCreateTime:(double)arg1;
- (_Bool)matchContent:(id)arg1 withQuery:(id)arg2;
- (_Bool)isMatchMsg:(id)arg1 SearchText:(id)arg2;
- (void)doSearch:(id)arg1;
- (id)getSearchText;
- (id)initWithPreLoadCount:(unsigned int)arg1 ChatName:(id)arg2;

@end

