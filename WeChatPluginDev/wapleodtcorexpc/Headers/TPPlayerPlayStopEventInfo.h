//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TPDynamicStatisticParams, TPGeneralPlayFlowParams;

@interface TPPlayerPlayStopEventInfo
{
    TPGeneralPlayFlowParams *_generalPlayFlowParams;
    TPDynamicStatisticParams *_dynamicStatisticParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPDynamicStatisticParams *dynamicStatisticParams; // @synthesize dynamicStatisticParams=_dynamicStatisticParams;
@property(retain, nonatomic) TPGeneralPlayFlowParams *generalPlayFlowParams; // @synthesize generalPlayFlowParams=_generalPlayFlowParams;
- (id)init;

@end

