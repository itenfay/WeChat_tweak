//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol DSMMatcherDelegate <NSObject>

@optional
- (void)onMatchModelErrorHappend;
- (void)enumerateItemUsingBlock:(_Bool (^)(NSString *, unsigned char))arg1;
@end

