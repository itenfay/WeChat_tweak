//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveStorageCleanupContext;

@protocol MMLiveStorageCleanupExt <NSObject>

@optional
- (void)willFinishStorageCleanupInScenario:(unsigned long long)arg1 withContext:(MMLiveStorageCleanupContext *)arg2;
- (void)willBeginStorageCleanupInScenario:(unsigned long long)arg1 withContext:(MMLiveStorageCleanupContext *)arg2;
@end

