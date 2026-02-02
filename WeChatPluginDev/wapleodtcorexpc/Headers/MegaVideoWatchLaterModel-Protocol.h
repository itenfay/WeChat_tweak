//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MegaVideoFeedFlowModel-Protocol.h"
#import "MegaVideoWatchLaterListener-Protocol.h"
#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol MegaVideoWatchLaterModel <NSObject, UnitRCBaseProtocol, MegaVideoFeedFlowModel, MegaVideoWatchLaterListener>
- (void)setAutoApplyChanges:(_Bool)arg1;
@end

