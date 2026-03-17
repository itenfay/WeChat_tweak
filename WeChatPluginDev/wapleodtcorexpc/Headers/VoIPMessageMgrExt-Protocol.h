//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol VoIPMessageMgrExt <NSObject>

@optional
- (void)onVoIPMessageMgrRejectCallBecasueOfPhoneCallingWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (void)onVoIPMessageMgrRejectCallBecasueOfSimucallingByCalleeWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
- (void)onVoIPMessageMgrRejectCallBecasueOfSimucallingByCallerWithRoomID:(unsigned long long)arg1 roomKey:(long long)arg2;
@end

