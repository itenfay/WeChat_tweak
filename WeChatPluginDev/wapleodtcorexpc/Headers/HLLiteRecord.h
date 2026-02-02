//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface HLLiteRecord : NSObject
{
    unsigned long long _rid;
    NSString *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long rid; // @synthesize rid=_rid;

@end

