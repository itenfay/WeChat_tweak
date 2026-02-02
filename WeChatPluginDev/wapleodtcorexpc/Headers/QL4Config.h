//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface QL4Config : NSObject
{
    _Bool _enable;
    NSDictionary *_json;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (id)initWithJSON:(id)arg1;

@end

