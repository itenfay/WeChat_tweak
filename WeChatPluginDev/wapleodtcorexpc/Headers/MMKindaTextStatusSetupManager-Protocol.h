//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidBoolStringCallback, NSString;

@protocol MMKindaTextStatusSetupManager <NSObject>
- (void)setupTextStatusImpl:(NSString *)arg1 transId:(NSString *)arg2 mktSign:(NSString *)arg3 payscene:(int)arg4 finishCallback:(MMVoidBoolStringCallback *)arg5;
@end

