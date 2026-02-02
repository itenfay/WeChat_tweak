//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol TXLivePlayListener <NSObject>
- (void)onNetStatus:(NSDictionary *)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(NSDictionary *)arg2;
@end

