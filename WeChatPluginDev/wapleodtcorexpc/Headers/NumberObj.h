//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NumberObj : NSObject
{
    int m_value;
    int _type;
    NSString *_valueStr;
}

+ (id)numberFromValueStr:(id)arg1 preferType:(int)arg2;
+ (id)numberFromValueStr:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *valueStr; // @synthesize valueStr=_valueStr;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)increase;
- (id)initWithValue:(int)arg1;

@end

