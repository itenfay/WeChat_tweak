//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol EmoticonListUpdateLogicDelegate;

@interface EmoticonListUpdateLogic : NSObject
{
    id <EmoticonListUpdateLogicDelegate> _delegate;
    NSMutableDictionary *_cgiDict;
    NSMutableDictionary *_cgiBuffDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cgiBuffDict; // @synthesize cgiBuffDict=_cgiBuffDict;
@property(retain, nonatomic) NSMutableDictionary *cgiDict; // @synthesize cgiDict=_cgiDict;
@property(nonatomic) __weak id <EmoticonListUpdateLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)checkIsBannerSetValid:(id)arg1;
- (id)getCgiForReqType:(unsigned int)arg1;
- (_Bool)isBufForReqTypeExist:(unsigned int)arg1;
- (id)getBufForReqType:(unsigned int)arg1;
- (void)onGetExptConfig:(id)arg1 reqType:(unsigned int)arg2;
- (void)onGetCellSetList:(id)arg1 andEmotionList:(id)arg2 hotNums:(id)arg3 forResult:(unsigned long long)arg4 reqType:(unsigned int)arg5 reqId:(id)arg6;
- (void)onGetEmojiList:(id)arg1 forResult:(unsigned long long)arg2 reqType:(unsigned int)arg3;
- (void)onGetListFailedForReqType:(unsigned int)arg1;
- (void)onGetBannerSetList:(id)arg1 andNewBannerList:(id)arg2 reqType:(unsigned int)arg3;
- (void)onGetListFinishedWithBuff:(id)arg1 reqType:(unsigned int)arg2;
- (id)getAdArrForReqType:(unsigned int)arg1;
- (unsigned long long)getSessionIDForReqType:(unsigned int)arg1;
- (void)endEmoticonListUpdateForReqType:(unsigned int)arg1;
- (void)cleanBuffForReqType:(unsigned int)arg1;
- (_Bool)getBoughtListFromServer;
- (_Bool)GetEmotionListFromStore:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

