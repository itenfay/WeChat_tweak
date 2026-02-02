//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAEJTexFilterPair : NSObject
{
    unsigned int _format;
    unsigned int _type;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFormat:(unsigned int)arg1 type:(unsigned int)arg2;

@end

