//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SessionDataStruct : NSObject
{
    NSString *_sid;
    unsigned long long _enterTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTimeMs; // @synthesize enterTimeMs=_enterTimeMs;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;

@end

