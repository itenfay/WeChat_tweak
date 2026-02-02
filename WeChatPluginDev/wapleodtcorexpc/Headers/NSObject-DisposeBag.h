//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface NSObject (DisposeBag)
- (void)removeFromDisposeBag:(id)arg1;
- (void)storeToDisposeBag:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *disposeBag;
@end

