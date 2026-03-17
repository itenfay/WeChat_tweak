//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxaLiteAppWidgetSetForbidRightGestureEnableMessage : NSObject
{
    _Bool _enable;
    long long _appUuid;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppUuid:(long long)arg1 enable:(_Bool)arg2;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) long long appUuid; // @synthesize appUuid=_appUuid;
- (id)toList;

@end

