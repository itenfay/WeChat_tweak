//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat14FTSSectionData : NSObject
{
    MISSING_TYPE *type;
    MISSING_TYPE *data;
    MISSING_TYPE *searchItemCount;
    MISSING_TYPE *disableCountLimit;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2 searchItemCount:(long long)arg3;
@property(nonatomic) _Bool disableCountLimit; // @synthesize disableCountLimit;
@property(nonatomic) long long searchItemCount; // @synthesize searchItemCount;
@property(nonatomic, copy) id data;
@property(nonatomic) unsigned long long type; // @synthesize type;

@end

