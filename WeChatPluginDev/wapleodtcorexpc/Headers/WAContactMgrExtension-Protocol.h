//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WAContact;

@protocol WAContactMgrExtension <NSObject>

@optional
- (void)onDeleteWeAppContact:(NSString *)arg1;
- (void)onModifyWeAppContactList:(NSArray *)arg1;
- (void)onModifyWeAppContact:(WAContact *)arg1;
- (void)onUpdateWeAppContactFailedWithKey:(NSString *)arg1 type:(unsigned long long)arg2 errMsg:(NSString *)arg3;
- (void)onUpdateWeAppContactSuccess:(WAContact *)arg1;
@end

