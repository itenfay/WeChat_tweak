//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMapCacheOption : NSObject
{
    int _sizeLimit;
    long long _type;
}

@property(nonatomic) int sizeLimit; // @synthesize sizeLimit=_sizeLimit;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)init;

@end

