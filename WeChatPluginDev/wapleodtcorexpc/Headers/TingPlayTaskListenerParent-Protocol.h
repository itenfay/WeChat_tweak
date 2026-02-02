//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "TingMembershipListener-Protocol.h"
#import "TingPlayListListener-Protocol.h"
#import "TingPlayTask-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingPlayTaskListenerParent <NSObject, UnitRCBaseProtocol, TingPlayTask, TingMembershipListener, TingPlayListListener>
@end

