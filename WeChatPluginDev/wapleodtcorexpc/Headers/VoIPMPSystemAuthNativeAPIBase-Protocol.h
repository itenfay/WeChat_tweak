//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoIPMPSystemAuthNativeAPICallback;

@protocol VoIPMPSystemAuthNativeAPIBase <NSObject>

@optional
- (void)requestAsync:(unsigned long long)arg1 type:(int)arg2;
- (void)setCallback:(VoIPMPSystemAuthNativeAPICallback *)arg1;
@end

