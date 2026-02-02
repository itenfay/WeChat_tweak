//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppJumpInfo : NSObject
{
    NSString *_schema;
    NSString *_appStoreUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appStoreUrl; // @synthesize appStoreUrl=_appStoreUrl;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;

@end

