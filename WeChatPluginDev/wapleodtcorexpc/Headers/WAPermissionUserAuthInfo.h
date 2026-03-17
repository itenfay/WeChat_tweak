//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAPermissionUserAuthInfo : NSObject
{
    unsigned long long _status;
    unsigned long long _source;
}

@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;

@end

