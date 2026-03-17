//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMBVConsoleDelegate <NSObject>

@optional
- (void)switchVConsole:(_Bool)arg1;
- (void)vConsoleLog:(NSString *)arg1;
@end

