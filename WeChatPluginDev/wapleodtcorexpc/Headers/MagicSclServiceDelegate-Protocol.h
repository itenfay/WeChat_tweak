//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MagicSclJsApiContextDelegate;

@protocol MagicSclServiceDelegate <NSObject>
- (id <MagicSclJsApiContextDelegate>)getJsApiContextDelegate;
@end

