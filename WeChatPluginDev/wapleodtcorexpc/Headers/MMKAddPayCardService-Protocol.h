//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBindCardContext, NSString;

@protocol MMKAddPayCardService <NSObject>
- (_Bool)clearBindCardProcess;
- (MMBindCardContext *)enterBindCardProcess:(int)arg1;
- (NSString *)getBanBindCardTitle;
- (_Bool)isBanBindCard;
@end

