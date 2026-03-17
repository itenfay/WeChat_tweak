//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BizDynamicCardMrgDelegate <NSObject>

@optional
- (void)onDynamicCardInfoEvent:(unsigned int)arg1 msgId:(unsigned long long)arg2 frameSetName:(NSString *)arg3 frameSetData:(NSString *)arg4;
- (void)onRecFeedsAdServerInfoEvent:(NSString *)arg1;
- (void)onAdServerInfoEvent:(NSString *)arg1;
@end

