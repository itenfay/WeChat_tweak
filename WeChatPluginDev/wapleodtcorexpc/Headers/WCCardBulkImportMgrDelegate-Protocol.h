//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, WCCardAcceptCardInfo, WCCardBulkInfo;

@protocol WCCardBulkImportMgrDelegate <NSObject>

@optional
- (void)onImportBulkCard:(WCCardAcceptCardInfo *)arg1 errCode:(int)arg2;
- (void)onGetBulkInfo:(WCCardBulkInfo *)arg1 errCode:(int)arg2;
- (void)onGetBulkCard:(NSMutableArray *)arg1 errCode:(int)arg2;
@end

