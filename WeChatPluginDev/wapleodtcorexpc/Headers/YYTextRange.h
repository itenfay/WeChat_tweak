//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextRange.h>

@class YYTextPosition;

@interface YYTextRange : UITextRange
{
    YYTextPosition *_start;
    YYTextPosition *_end;
}

+ (id)defaultRange;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
+ (id)rangeWithRange:(struct _NSRange)arg1 affinity:(long long)arg2;
+ (id)rangeWithRange:(struct _NSRange)arg1;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)asRange;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) YYTextPosition *end;
@property(readonly, nonatomic) YYTextPosition *start;
- (id)init;

@end

