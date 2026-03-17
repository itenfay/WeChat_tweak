//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol FlutterCommonFunc <NSObject>
- (NSData *)callHost:(NSData *)arg1 engineId:(NSString *)arg2;
- (NSString *)funcName;
@end

