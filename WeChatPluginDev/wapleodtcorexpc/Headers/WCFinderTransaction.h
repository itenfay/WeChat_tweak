//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderTransaction : NSObject
{
    _Bool _autoCommitWhenDealloc;
    id _userInfo;
    long long _state;
    id _extObj1;
    CDUnknownBlockType _block;
}

+ (id)transactionAction:(CDUnknownBlockType)arg1;
+ (id)transactionAction:(CDUnknownBlockType)arg1 autoCommit:(_Bool)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) id extObj1; // @synthesize extObj1=_extObj1;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool autoCommitWhenDealloc; // @synthesize autoCommitWhenDealloc=_autoCommitWhenDealloc;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (id)stringForState:(long long)arg1;
- (id)description;
- (_Bool)isDone;
- (_Bool)isCancel;
- (_Bool)isPending;
- (void)commitCancel;
- (void)commit;
- (void)commit:(long long)arg1;
- (void)dealloc;

@end

