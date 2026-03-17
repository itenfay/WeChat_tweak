//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, WCAddressBaseAddress;

@protocol WCAddressLogicMgrExt <NSObject>

@optional
- (void)OnAnalyseAddressInfo:(WCAddressBaseAddress *)arg1;
- (void)OnImportYiXunAddress:(NSArray *)arg1 importStatus:(int)arg2 Error:(NSError *)arg3;
- (void)OnGetAllFourthAddressStageData:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetGetAllAddressStageData:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetAllAddress:(NSArray *)arg1 UserName:(NSString *)arg2 NickName:(NSString *)arg3 Error:(NSError *)arg4;
- (void)OnSetRecentlyUsedAddress:(WCAddressBaseAddress *)arg1 Error:(NSError *)arg2;
- (void)OnModifyAddress:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnDelAllAddress:(NSError *)arg1;
- (void)OnDelAddress:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnAddAddress:(NSArray *)arg1 Error:(NSError *)arg2;
- (void)OnGetLatestAddress:(WCAddressBaseAddress *)arg1 UserName:(NSString *)arg2 NickName:(NSString *)arg3 Error:(NSError *)arg4;
@end

