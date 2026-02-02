//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxaLiteAppWidgetCloseWindowMessage : NSObject
{
    _Bool _animated;
    long long _appUuid;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppUuid:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) long long appUuid; // @synthesize appUuid=_appUuid;
- (id)toList;

@end

