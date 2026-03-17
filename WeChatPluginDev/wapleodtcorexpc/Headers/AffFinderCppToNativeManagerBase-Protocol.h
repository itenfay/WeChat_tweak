//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol AffFinderCppToNativeManagerBase <NSObject>

@optional
- (NSData *)getFinderSyncClientInfo;
- (NSData *)getFinderBaseReq:(int)arg1 syncScene:(int)arg2 cmdId:(int)arg3;
- (NSData *)findShowInfoByPath:(NSString *)arg1;
- (NSData *)getFinderCtrlInfoByKeyPath:(NSString *)arg1;
- (NSData *)getLocation:(int)arg1;
- (NSArray *)getMultiFinderUserNames;
- (NSString *)getFinderUserName;
@end

