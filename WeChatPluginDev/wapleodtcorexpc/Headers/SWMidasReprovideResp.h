//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, SWMidasUser;

@interface SWMidasReprovideResp : NSObject
{
    MISSING_TYPE *user;
    MISSING_TYPE *billID;
    MISSING_TYPE *portalSerialID;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *portalSerialID;
@property(nonatomic, readonly) NSString *billID;
@property(nonatomic, readonly) SWMidasUser *user; // @synthesize user;

@end

