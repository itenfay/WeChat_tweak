//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFImageKey : NSObject
{
    NSString *_path;
    long long _type;
    NSString *_hashKey;
    NSString *_uri;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)savedPath;
- (id)path;
- (id)initWithType:(long long)arg1 key:(id)arg2 uri:(id)arg3;

@end

