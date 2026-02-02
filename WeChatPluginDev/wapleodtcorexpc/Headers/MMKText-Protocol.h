//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMKLink;

@protocol MMKText <NSObject>
- (void)appendLink:(id <MMKLink>)arg1;
- (void)appendText:(NSString *)arg1;
@end

