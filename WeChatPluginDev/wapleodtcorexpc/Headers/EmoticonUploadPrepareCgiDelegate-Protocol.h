//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol EmoticonUploadPrepareCgiDelegate <NSObject>
- (void)onEmoticonUploadPrepareFail;
- (void)onEmoticonUploadPrepareSuccess:(NSData *)arg1;
@end

