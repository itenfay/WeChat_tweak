//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextPosition.h>

@interface YYTextPosition : UITextPosition
{
    long long _offset;
    long long _affinity;
}

+ (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;
+ (id)positionWithOffset:(long long)arg1;
@property(readonly, nonatomic) long long affinity; // @synthesize affinity=_affinity;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

