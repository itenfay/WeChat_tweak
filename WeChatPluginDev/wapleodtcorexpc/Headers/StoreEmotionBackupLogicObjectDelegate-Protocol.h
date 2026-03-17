//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol StoreEmotionBackupLogicObjectDelegate <NSObject>

@optional
- (void)onStoreEmotionBackupLogicNoneedBackup;
- (void)onStoreEmotionBackupLogicFailed;
- (void)onStoreEmotionBackupLogicOK;
@end

