//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@protocol FlutterMessageCodec
+ (id)sharedInstance;
- (id)decode:(NSData *)arg1;
- (NSData *)encode:(id)arg1;
@end

