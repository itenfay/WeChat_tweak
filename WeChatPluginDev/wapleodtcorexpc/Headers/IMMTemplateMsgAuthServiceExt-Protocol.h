//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString;

@protocol IMMTemplateMsgAuthServiceExt <NSObject>

@optional
- (void)onFetchShowInSettingScopeList:(NSMutableArray *)arg1 forUser:(NSString *)arg2 hasSettingEntry:(_Bool)arg3;
- (void)onUpdateScopeListFinished:(NSMutableArray *)arg1 forUser:(NSString *)arg2;
- (void)onUpdateScopeList:(NSMutableArray *)arg1 forUser:(NSString *)arg2;
- (void)onUpdateScopeGlobalRecv:(_Bool)arg1 forUser:(NSString *)arg2;
- (void)onFetchAccountCacheAndScopeGlobalRecvWithOffset:(unsigned int)arg1 userInfo:(NSObject *)arg2;
- (void)onUpdateBrandList:(NSArray *)arg1 weappList:(NSArray *)arg2;
- (void)onUpdateAccountGlobalNotify:(_Bool)arg1;
@end

