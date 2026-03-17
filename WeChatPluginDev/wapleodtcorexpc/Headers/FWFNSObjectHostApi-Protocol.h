//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber, NSString;

@protocol FWFNSObjectHostApi
- (void)removeObserverForObjectWithIdentifier:(NSNumber *)arg1 observerIdentifier:(NSNumber *)arg2 keyPath:(NSString *)arg3 error:(id *)arg4;
- (void)addObserverForObjectWithIdentifier:(NSNumber *)arg1 observerIdentifier:(NSNumber *)arg2 keyPath:(NSString *)arg3 options:(NSArray *)arg4 error:(id *)arg5;
- (void)disposeObjectWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
@end

