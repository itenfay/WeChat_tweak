//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YYTransaction : NSObject
{
    id _target;
    SEL _selector;
}

+ (id)transactionWithTarget:(id)arg1 selector:(SEL)arg2;
+ (void)load;
- (void).cxx_destruct;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)commit;

@end

