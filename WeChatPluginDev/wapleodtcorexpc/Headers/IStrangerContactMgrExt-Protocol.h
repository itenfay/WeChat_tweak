//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSString;

@protocol IStrangerContactMgrExt <NSObject>

@optional
- (void)onStrangerContactUpdateForbidden:(NSString *)arg1;
- (void)onStrangerContactUpdated:(NSString *)arg1 Contact:(CContact *)arg2;
- (void)onStrangerContactUpdated:(NSArray *)arg1;
@end

