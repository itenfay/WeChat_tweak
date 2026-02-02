//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMOrderCenterOrderListDataProvider : NSObject
{
    _Bool _hasMoreOrders;
    _Bool _newFetch;
    unsigned int _orderType;
    unsigned int _evaluationStatus;
    NSString *_lastIndex;
    NSString *_filteringAppId;
}

+ (id)providerWithOrderType:(unsigned int)arg1;
+ (id)providerWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2;
+ (id)providerWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2 evaluationStatus:(unsigned int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filteringAppId; // @synthesize filteringAppId=_filteringAppId;
@property(nonatomic) _Bool newFetch; // @synthesize newFetch=_newFetch;
@property(nonatomic) _Bool hasMoreOrders; // @synthesize hasMoreOrders=_hasMoreOrders;
@property(retain, nonatomic) NSString *lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) unsigned int evaluationStatus; // @synthesize evaluationStatus=_evaluationStatus;
@property(nonatomic) unsigned int orderType; // @synthesize orderType=_orderType;
- (id)noDataPrompt;
- (void)getReplacementOrdersAtPositionalIndex:(unsigned long long)arg1 withAttachedIndex:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)getOrdersWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 forceRefresh:(_Bool)arg3;
- (id)initWithOrderType:(unsigned int)arg1;
- (id)initWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2;
- (id)initWithOrderType:(unsigned int)arg1 filteringAppId:(id)arg2 evaluationStatus:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

