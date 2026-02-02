//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAOrderInfoModel;

@interface WAOrderInfoLogic
{
    WAOrderInfoModel *_orderInfo;
    CDUnknownBlockType _orderInfoRespAction;
    CDUnknownBlockType _dissmissOrderRedDotRespAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dissmissOrderRedDotRespAction; // @synthesize dissmissOrderRedDotRespAction=_dissmissOrderRedDotRespAction;
@property(copy, nonatomic) CDUnknownBlockType orderInfoRespAction; // @synthesize orderInfoRespAction=_orderInfoRespAction;
@property(readonly, nonatomic) WAOrderInfoModel *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)requestReportOpenWxaOrderWithCompleteAction:(CDUnknownBlockType)arg1;
- (void)requestOrderInfoWithCompleteAction:(CDUnknownBlockType)arg1;

@end

