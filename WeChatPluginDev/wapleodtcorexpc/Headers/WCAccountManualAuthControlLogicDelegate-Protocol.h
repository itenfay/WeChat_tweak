//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ProtobufCGIWrap, UnifyAuthResponse;

@protocol WCAccountManualAuthControlLogicDelegate <NSObject>
- (_Bool)onManualAuthControlLogicError:(ProtobufCGIWrap *)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(UnifyAuthResponse *)arg2;
@end

