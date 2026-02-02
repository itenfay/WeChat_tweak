//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPCacheObject : NSObject
{
    double _expireTime;
    NSString *_value;
    NSString *_key;
    double _saveTime;
}

- (void).cxx_destruct;
@property(nonatomic) double saveTime; // @synthesize saveTime=_saveTime;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
- (_Bool)isDue;

@end

