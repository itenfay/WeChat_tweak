//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol ITPPluginBase <NSObject>
- (void)onEvent:(unsigned long long)arg1 withUserInfo:(NSDictionary *)arg2;
- (void)onDetach;
- (void)onAttatch;
@end

