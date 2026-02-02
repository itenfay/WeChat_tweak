//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMIlinkCheckResourceRequestInfo : NSObject
{
    NSString *_projectId;
    NSString *_resourceName;
    NSArray *_localResources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *localResources; // @synthesize localResources=_localResources;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(retain, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;

@end

