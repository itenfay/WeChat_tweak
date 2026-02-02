//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveNotifyStyleHotSaleCommentPubbleCell, NSMutableDictionary, NSString;

@interface MMFinderLiveECHotSaleLikeAnimationCenter : NSObject
{
    MMFinderLiveNotifyStyleHotSaleCommentPubbleCell *_notifyCell;
    NSMutableDictionary *_localData;
    NSMutableDictionary *_numberLogics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *numberLogics; // @synthesize numberLogics=_numberLogics;
@property(retain, nonatomic) NSMutableDictionary *localData; // @synthesize localData=_localData;
@property(nonatomic) __weak MMFinderLiveNotifyStyleHotSaleCommentPubbleCell *notifyCell; // @synthesize notifyCell=_notifyCell;
- (void)removeNumberAnimationLogic:(id)arg1;
- (id)provideNumberAnimationLogicWithRuleInfo:(id)arg1 ForProductID:(unsigned long long)arg2;
- (void)onWillDisplayGoodsCell:(id)arg1;
- (void)receiveHintAnimationInfo:(id)arg1 withProductID:(unsigned long long)arg2 fromDataSource:(unsigned long long)arg3;
- (void)changeNumberWithLogic:(id)arg1;
- (id)localForProductID:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (_Bool)receiveRuleInfo:(id)arg1 withProductID:(unsigned long long)arg2 fromDataSource:(unsigned long long)arg3;
- (void)updateLocalForProductID:(unsigned long long)arg1 type:(unsigned long long)arg2 value:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

