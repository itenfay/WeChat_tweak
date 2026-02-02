//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCTextStateDBExt <NSObject>

@optional
- (void)onTextStateRead:(NSString *)arg1 username:(NSString *)arg2;
- (void)onTextStateNotifyRead;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(NSString *)arg2;
@end

