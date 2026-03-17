//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol NSCoding;

@protocol MMWormholeTransitingDelegate <NSObject>
- (void)notifyListenerForMessageWithIdentifier:(NSString *)arg1 message:(id <NSCoding>)arg2;
@end

