//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString;

@protocol CommonAffContext <NSObject, UnitRCBaseProtocol>
- (_Bool)isInvalidContext;
- (_Bool)isRootContext;
- (_Bool)isUserContext;
- (NSString *)getUinStr;
- (unsigned int)getUin;
@end

