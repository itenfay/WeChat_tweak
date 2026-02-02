//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppIconItem : NSObject
{
    NSString *appIconUrl;
    NSString *appID;
    NSString *cmd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl;
- (id)init;

@end

