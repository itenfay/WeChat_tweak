//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@protocol QBAnaEncrypt
- (NSData *)decrypt:(NSData *)arg1 key:(NSString *)arg2;
- (NSData *)encrypt:(NSData *)arg1 key:(NSString *)arg2;
@end

