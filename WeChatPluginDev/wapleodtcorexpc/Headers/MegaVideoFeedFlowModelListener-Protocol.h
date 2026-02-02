//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol MegaVideoFeedFlowModel;

@protocol MegaVideoFeedFlowModelListener <NSObject, UnitRCBaseProtocol>
- (void)onItemListUpdated:(id <MegaVideoFeedFlowModel>)arg1;
@end

