//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHttpConnection, NSData, NSString;

@protocol MMHttpConnectionDelegate

@optional
- (void)HttpConnectionFail:(MMHttpConnection *)arg1;
- (void)HttpConnectionFinished:(MMHttpConnection *)arg1 Data:(NSData *)arg2 ErrNo:(int)arg3;
- (void)HttpConnectionFinished:(MMHttpConnection *)arg1 cachekey:(NSString *)arg2 response:(NSData *)arg3 ErrNo:(int)arg4;
- (void)HttpConnectionFinished:(MMHttpConnection *)arg1 XML:(NSString *)arg2 ErrNo:(int)arg3;
@end

