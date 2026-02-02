//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLLocation, NSDictionary, NSString;

@protocol IPOILocationDisplayExt <NSObject>
- (void)onGetPOIDisplayName:(NSString *)arg1 ForLocation:(CLLocation *)arg2 Scene:(int)arg3 SrcDisplayName:(NSString *)arg4 extraInfo:(NSDictionary *)arg5 Error:(int)arg6;
@end

