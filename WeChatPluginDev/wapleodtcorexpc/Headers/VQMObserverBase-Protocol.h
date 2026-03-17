//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol VQMObserverBase <NSObject>

@optional
- (void)didReport:(NSData *)arg1;
- (void)didUpdateProfile:(int)arg1 bytesFromProfile:(NSData *)arg2 bytesToProfile:(NSData *)arg3;
- (void)didPoll;
- (unsigned long long)identifier;
@end

