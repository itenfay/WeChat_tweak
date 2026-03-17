//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WWKFContact;

@protocol IWWKFContactMgrExt <NSObject>

@optional
- (void)onWWKFContactHeadImageURLChangeed:(WWKFContact *)arg1;
- (void)onWWKFContactUpdated:(WWKFContact *)arg1;
- (void)onWWKFContactDeleted:(WWKFContact *)arg1;
@end

