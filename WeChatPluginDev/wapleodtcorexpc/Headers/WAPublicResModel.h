//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAPublicResModel : NSObject
{
    unsigned long long _type;
    unsigned long long _version;
}

@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

