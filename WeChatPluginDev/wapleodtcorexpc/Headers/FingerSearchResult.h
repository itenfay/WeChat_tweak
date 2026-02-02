//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FingerSearchResult : NSObject
{
    unsigned char _weight;
    unsigned int _location;
    unsigned long long _type;
    NSString *_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int location; // @synthesize location=_location;
@property(nonatomic) unsigned char weight; // @synthesize weight=_weight;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)contentLength;

@end

