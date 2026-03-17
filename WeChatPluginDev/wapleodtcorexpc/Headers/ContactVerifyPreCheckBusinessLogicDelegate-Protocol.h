//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSString;

@protocol ContactVerifyPreCheckBusinessLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)onContactVerifyPreCheckBusinessSuccess:(NSString *)arg1 opcode:(unsigned int)arg2;
@end

