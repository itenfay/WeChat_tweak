//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UBSignalArgumentCount0-Protocol.h"

@class NSOperationQueue, UBSignalObserver;

@protocol EmptySignal <UBSignalArgumentCount0>
- (void (^)(UBSignalObserver *))fireForSignalObserver;
- (void (^)(void))fire;
- (UBSignalObserver *)addObserver:(id)arg1 queue:(NSOperationQueue *)arg2 priority:(unsigned long long)arg3 callback:(void (^)(id))arg4;
- (UBSignalObserver *)addObserver:(id)arg1 priority:(unsigned long long)arg2 callback:(void (^)(id))arg3;
- (UBSignalObserver *)addObserver:(id)arg1 queue:(NSOperationQueue *)arg2 callback:(void (^)(id))arg3;
- (UBSignalObserver *)addObserver:(id)arg1 callback:(void (^)(id))arg2;
@end

