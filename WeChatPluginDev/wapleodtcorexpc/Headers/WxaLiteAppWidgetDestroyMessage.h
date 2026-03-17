//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WxaLiteAppWidgetDestroyMessage : NSObject
{
    long long _appUuid;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppUuid:(long long)arg1;
@property(nonatomic) long long appUuid; // @synthesize appUuid=_appUuid;
- (id)toList;

@end

