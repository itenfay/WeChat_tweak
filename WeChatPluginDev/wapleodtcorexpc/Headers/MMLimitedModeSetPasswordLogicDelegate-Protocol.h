//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLimitedModeSetPasswordLogicDelegate <NSObject>

@optional
- (void)onLimitedModeSetPasswordRetType:(unsigned int)arg1 ticket:(NSString *)arg2 success:(_Bool)arg3 errMsg:(NSString *)arg4;
@end

