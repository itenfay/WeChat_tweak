//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, NSMutableArray, NSString;

@protocol ISessionInfoExt <NSObject>

@optional
- (void)onModifyDraft:(CBaseContact *)arg1 draft:(NSString *)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onGetDraft:(CBaseContact *)arg1 draft:(NSMutableArray *)arg2 referMsgSvrId:(long long *)arg3;
@end

