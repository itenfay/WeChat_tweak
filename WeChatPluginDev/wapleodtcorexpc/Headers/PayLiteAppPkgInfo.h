//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PayLiteAppPkgInfo : NSObject
{
    NSString *_appId;
    NSString *_resourceName;
    NSArray *_localResources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *localResources; // @synthesize localResources=_localResources;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)init:(id)arg1 resourceName:(id)arg2 localResources:(id)arg3;

@end

