//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LocalJSNotification : NSObject
{
    NSString *_name;
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

