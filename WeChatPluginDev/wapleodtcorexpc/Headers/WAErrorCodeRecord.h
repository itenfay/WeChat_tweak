//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAErrorCodeRecord : NSObject
{
    unsigned long long _errCode;
    unsigned long long _timestampMS;
}

@property(nonatomic) unsigned long long timestampMS; // @synthesize timestampMS=_timestampMS;
@property(nonatomic) unsigned long long errCode; // @synthesize errCode=_errCode;

@end

