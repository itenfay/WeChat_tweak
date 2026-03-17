//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol InputKeyboardDelegate <NSObject>
- (void)onInputSuccess:(unsigned int)arg1 confirmType:(NSString *)arg2;
- (void)onInputError:(NSString *)arg1;
@end

