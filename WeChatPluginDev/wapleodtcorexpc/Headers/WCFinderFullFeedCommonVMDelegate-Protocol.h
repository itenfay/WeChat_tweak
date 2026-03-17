//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderFeedContentVM;

@protocol WCFinderFullFeedCommonVMDelegate <NSObject>
- (void)onFeedVMDataReplaceEnhanceList:(NSArray *)arg1 targetTid:(NSString *)arg2;
- (void)onFeedVMDataInsertEnhanceList:(NSArray *)arg1 targetTid:(NSString *)arg2;
- (void)onFeedVMDataWillRemoved:(WCFinderFeedContentVM *)arg1;
@end

