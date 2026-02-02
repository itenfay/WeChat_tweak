//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMIlinkCheckResourceTypeInfo : NSObject
{
    unsigned int _timeStamp;
    NSArray *_projectIds;
    unsigned long long _type;
    NSString *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *projectIds; // @synthesize projectIds=_projectIds;

@end

