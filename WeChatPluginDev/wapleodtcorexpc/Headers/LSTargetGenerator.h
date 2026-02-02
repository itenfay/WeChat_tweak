//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LSTargetGenerator : NSObject
{
    unsigned int _type;
    SEL _sel;
    CDUnknownBlockType _block;
}

+ (id)createByBlock:(CDUnknownBlockType)arg1;
+ (id)createBySel:(SEL)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)getTarget:(id)arg1 withParams:(id)arg2;
- (id)getTarget:(id)arg1;
- (id)init;

@end

