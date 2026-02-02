//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol CaraNativeContactBase <NSObject>

@optional
- (NSString *)getDisplayName;
- (_Bool)isSessionStickyOnTop;
- (_Bool)isMinimized;
- (_Bool)isMute;
- (_Bool)isOpenIM;
- (_Bool)isGroup;
- (_Bool)isPrivate;
- (NSString *)username;
@end

