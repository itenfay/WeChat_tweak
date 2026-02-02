//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol IZZReactive;

@protocol IZZReactive <NSObject>
@property(readonly, nonatomic) NSObject<IZZReactive> *installAndFire;
@property(readonly, nonatomic) NSObject<IZZReactive> *fire;
@property(readonly, nonatomic) NSObject<IZZReactive> *install;
@property(copy, nonatomic) CDUnknownBlockType next;
@property(copy, nonatomic) CDUnknownBlockType filter;
@property(copy, nonatomic) CDUnknownBlockType map;
@property(readonly, nonatomic) __weak NSObject<IZZReactive> *headPO;
- (id)getIDRetrunValue;
- (void)getReturnValue:(void *)arg1;
@end

