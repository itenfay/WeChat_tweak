//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPThumbPlayerWrapper;

@protocol TPThumbPlayerEventRecordCallback <NSObject>

@optional
- (void)onPlayer:(TPThumbPlayerWrapper *)arg1 drmInfo:(const void *)arg2;
@end

