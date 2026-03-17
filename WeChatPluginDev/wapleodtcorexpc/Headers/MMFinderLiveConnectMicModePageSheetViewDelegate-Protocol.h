//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMFinderLiveConnectMicModePageSheetViewDelegate <NSObject>

@optional
- (void)onConnectMicAutoConnectChanged:(_Bool)arg1;
- (void)onConnectMicConditionChanged:(unsigned long long)arg1;
- (void)onConnectMicFocusChangeCanceled;
- (void)onConnectMicModeOrFocusChangeConfirmed:(unsigned long long)arg1 focusedUserId:(NSString *)arg2 userIndices:(NSDictionary *)arg3;
@end

