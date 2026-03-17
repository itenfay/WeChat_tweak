//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCVideoCaptureConfig;
@protocol TXIVideoBindable;

@protocol TXIVideoCaptureInterface <NSObject>
@property(readonly, nonatomic) unsigned long long captureType;
@property(readonly) _Bool isRunning;
- (void)setFrameRate:(long long)arg1;
- (void)applyConfigs:(TXCVideoCaptureConfig *)arg1;
- (void)removeObserver:(id <TXIVideoBindable>)arg1;
- (void)addObserver:(id <TXIVideoBindable>)arg1;
@end

