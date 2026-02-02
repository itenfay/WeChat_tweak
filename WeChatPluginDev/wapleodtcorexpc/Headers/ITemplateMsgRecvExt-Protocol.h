//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol ITemplateMsgRecvExt <NSObject>

@optional
- (void)onTemplateMsgConnectionChange:(unsigned int)arg1;
- (void)onTemplateMsgRecvStateChangedForUser:(NSString *)arg1 withData:(NSArray *)arg2;
@end

