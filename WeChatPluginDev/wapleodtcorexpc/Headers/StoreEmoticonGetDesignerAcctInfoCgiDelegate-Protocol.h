//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, PersonalDesigner;

@protocol StoreEmoticonGetDesignerAcctInfoCgiDelegate <NSObject>
- (void)onGetDesignerAcctInfoFailWithDeisignerUin:(unsigned int)arg1;
- (void)onGetDesignerAcctInfoFailWithDesignerId:(NSString *)arg1;
- (void)onGetDesignerAcctInfoOKWithDeisignerUin:(unsigned int)arg1 PersonalDesigner:(PersonalDesigner *)arg2;
- (void)onGetDesignerAcctInfoOKWithDesignerId:(NSString *)arg1 PersonalDesigner:(PersonalDesigner *)arg2;
@end

