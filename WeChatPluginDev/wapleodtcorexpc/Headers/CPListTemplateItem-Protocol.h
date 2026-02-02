//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol CPListTemplateItem <NSObject>
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;
@property(nonatomic, copy) id userInfo;
@property(nonatomic, readonly) NSString *text;
@end

