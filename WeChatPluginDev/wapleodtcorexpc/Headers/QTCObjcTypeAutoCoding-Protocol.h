//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol QTCObjcTypeAutoCoding <NSObject>
+ (NSString *)qtc_supportedObjcType;
- (id)qtc_decode;
- (id)qtc_encodeWithValue:(id)arg1;
@end

