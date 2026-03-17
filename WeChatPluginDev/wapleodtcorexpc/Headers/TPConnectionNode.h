//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPConnectionNode : NSObject
{
    void *_nativeConnNode;
}

@property(nonatomic) void *nativeConnNode; // @synthesize nativeConnNode=_nativeConnNode;
- (void *)getNativeConnNode;
- (_Bool)setLongActionConfig:(long long)arg1 cfgType:(long long)arg2 cfgValue:(long long)arg3;
- (void)removeAction:(long long)arg1;
- (_Bool)addAction:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

