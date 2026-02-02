//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol GCDWebServerBodyReader <NSObject>
- (void)close;
- (NSData *)readData:(id *)arg1;
- (_Bool)open:(id *)arg1;

@optional
- (void)asyncReadDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

