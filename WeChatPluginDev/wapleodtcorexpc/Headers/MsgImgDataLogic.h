//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol MsgImgDataLogicDelegate;

@interface MsgImgDataLogic : NSObject
{
    unsigned int m_uiPreID;
    unsigned int m_uiNextID;
    unsigned int m_uiPreCreateTime;
    unsigned int m_uiNextCreateTime;
    NSMutableArray *m_arrPreMsg;
    NSMutableArray *m_arrNextMsg;
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrSimpleMsg;
    NSString *m_nsChatName;
    unsigned int m_uiPreLoadCount;
    unsigned int m_uiPreReadCount;
    _Bool _m_bLoading;
    _Bool _m_bPreEnd;
    _Bool _m_bNextEnd;
    _Bool _m_bNeedFullMessage;
    NSString *_m_enterpriseBrandUserName;
    id <MsgImgDataLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNeedFullMessage; // @synthesize m_bNeedFullMessage=_m_bNeedFullMessage;
@property(nonatomic) __weak id <MsgImgDataLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_enterpriseBrandUserName; // @synthesize m_enterpriseBrandUserName=_m_enterpriseBrandUserName;
@property(nonatomic) _Bool m_bNextEnd; // @synthesize m_bNextEnd=_m_bNextEnd;
@property(nonatomic) _Bool m_bPreEnd; // @synthesize m_bPreEnd=_m_bPreEnd;
@property(nonatomic) _Bool m_bLoading; // @synthesize m_bLoading=_m_bLoading;
- (void)preLoad:(id)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (id)asyncLoadSomeImg:(_Bool)arg1;
- (_Bool)isMsgMatch:(id)arg1;
- (void)updateMsgArray;
- (id)getMsgByLocalID:(unsigned int)arg1;
- (id)getMsgFor:(unsigned int)arg1;
- (unsigned int)getIndexFor:(id)arg1;
- (unsigned int)getIndexForSimpleMsg:(id)arg1;
- (void)resetWithCurrentMsg:(id)arg1;
- (id)getNextCurMsg:(id)arg1;
- (void)removeMsgByLocalID:(unsigned int)arg1;
- (id)getSimpleMsgArray;
- (id)getSimpleMsgFrom:(id)arg1;
- (id)getMsgArray;
- (id)initWithPreLoadCount:(unsigned int)arg1 PreReadCount:(unsigned int)arg2 ChatName:(id)arg3;

@end

