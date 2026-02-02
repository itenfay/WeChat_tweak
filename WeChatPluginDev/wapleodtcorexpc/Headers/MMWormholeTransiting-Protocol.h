//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol NSCoding;

@protocol MMWormholeTransiting <NSObject>
- (void)deleteContentForIdentifier:(NSString *)arg1;
- (id <NSCoding>)messageObjectForIdentifier:(NSString *)arg1;
- (_Bool)writeMessageObject:(id <NSCoding>)arg1 forIdentifier:(NSString *)arg2;
@end

