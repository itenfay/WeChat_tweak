//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol IKFContactMgrExt <NSObject>

@optional
- (void)onUpdateKFContactsList:(NSArray *)arg1 errCode:(int)arg2;
- (void)onGetKFContactsBindList:(NSArray *)arg1 errCode:(int)arg2;
- (void)onGetKFContactsDefaultList:(NSArray *)arg1 errCode:(int)arg2;
@end

