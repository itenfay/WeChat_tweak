//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ProtobufCGIWrap;

@protocol WCAccountGraphicVerifyControlLogicDelegate <NSObject>
- (void)onGraphicVerifyControlLogicReturn:(ProtobufCGIWrap *)arg1;
- (ProtobufCGIWrap *)onGraphicVerifyControlLogicGetAuthRequest:(_Bool)arg1;
- (void)onGraphicVerifyControlLogicCancel;
@end

