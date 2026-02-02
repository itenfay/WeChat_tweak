//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffNewLifeActionManagerCallback, NSData;

@protocol AffNewLifeActionManagerBase <NSObject>

@optional
- (NSData *)doActionSync:(NSData *)arg1;
- (void)doActionAsync:(int)arg1 req:(NSData *)arg2;
- (void)setCallback:(AffNewLifeActionManagerCallback *)arg1;
@end

