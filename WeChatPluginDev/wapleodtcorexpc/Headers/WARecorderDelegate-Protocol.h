//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, WABaseRecorder;

@protocol WARecorderDelegate <NSObject>
- (void)onRecorderStateChange:(unsigned long long)arg1 recorder:(WABaseRecorder *)arg2 error:(NSError *)arg3;
- (void)onRecorderDidRecordData:(NSData *)arg1 isLastFrame:(_Bool)arg2;
@end

