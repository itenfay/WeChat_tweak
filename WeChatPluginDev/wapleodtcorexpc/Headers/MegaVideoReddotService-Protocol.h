//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData;
@protocol MegaVideoReddotListener;

@protocol MegaVideoReddotService <NSObject, UnitRCBaseProtocol>
- (void)removeListener:(id <MegaVideoReddotListener>)arg1;
- (void)addListener:(id <MegaVideoReddotListener>)arg1;
- (NSData *)getReddot;
- (void)clearReddot:(NSData *)arg1;
- (_Bool)hasReddot;
- (void)saveReddotInfo:(NSData *)arg1;
@end

