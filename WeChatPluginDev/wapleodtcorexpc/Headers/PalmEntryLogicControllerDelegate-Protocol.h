//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol PalmEntryLogicControllerDelegate <NSObject>

@optional
- (NSString *)palmEntryLogicGetSdkConfig;
- (unsigned long long)palmEntryLogicGetLimitHandType;
- (void)palmEntryLogicDidGetFinalResult:(NSString *)arg1;
- (void)palmEntryLogicWillGetFinalResult;
- (void)palmEntryLogicShouldUpdateTips:(int)arg1 code:(int)arg2 isFirstDetectPalm:(_Bool)arg3 handType:(unsigned long long)arg4;
@end

