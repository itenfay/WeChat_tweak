//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class TingItem;

@protocol TingPlayItemFetchService <NSObject, UnitRCBaseProtocol>
- (void)fetchTingPlayItem:(TingItem *)arg1 forceUpdate:(_Bool)arg2 needEncrypt:(_Bool)arg3 callback:(void (^)(_Bool, NSString *, TingPlayItem *))arg4;
@end

