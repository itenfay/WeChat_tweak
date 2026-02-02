//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject;

@protocol UBSignaling <NSObject>
@property(copy, nonatomic) CDUnknownBlockType observerRemoved;
@property(copy, nonatomic) CDUnknownBlockType observerAdded;
@property(readonly) unsigned long long observerCount;
@property(nonatomic) unsigned long long maxObservers;
- (void)removeAllObservers;
- (void)removeObserver:(NSObject *)arg1;
@end

