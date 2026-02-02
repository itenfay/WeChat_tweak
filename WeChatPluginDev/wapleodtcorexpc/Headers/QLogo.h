//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QLogo : NSObject
{
    NSString *_logoName;
    NSString *_logoURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(copy, nonatomic) NSString *logoName; // @synthesize logoName=_logoName;

@end

