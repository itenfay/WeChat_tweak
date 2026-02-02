//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WxaLiteAppWidgetTapEventMessage : NSObject
{
    long long _appUuid;
    NSDictionary *_params;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAppUuid:(long long)arg1 params:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long appUuid; // @synthesize appUuid=_appUuid;
- (id)toList;

@end

