//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTimer, MsgNewImgDataLogic, NSMutableArray, NSMutableSet, NSString;
@protocol ChatRoomToolLastUseWeAppLogicDelegate;

@interface ChatRoomToolLastUseWeAppLogic
{
    MMTimer *m_weAppSearchTimer;
    CContact *_chatRoomContact;
    id <ChatRoomToolLastUseWeAppLogicDelegate> _delegate;
    MsgNewImgDataLogic *_dataLogic;
    NSMutableArray *_msgArr;
    NSMutableSet *_weAppSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *weAppSet; // @synthesize weAppSet=_weAppSet;
@property(retain, nonatomic) NSMutableArray *msgArr; // @synthesize msgArr=_msgArr;
@property(retain, nonatomic) MsgNewImgDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(nonatomic) __weak id <ChatRoomToolLastUseWeAppLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (_Bool)onMsgNewImgLogicDataMatch:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (void)stopWeAppSearch;
- (id)getLastHalfYearDate;
- (void)initData;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

