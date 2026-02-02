//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMLimitedModeExt <NSObject>
- (void)onLimitedModeChanged;

@optional
- (void)onChangeLimitedModeFail;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
@end

