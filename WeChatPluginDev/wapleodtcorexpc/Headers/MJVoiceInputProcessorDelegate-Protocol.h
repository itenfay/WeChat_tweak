//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString;

@protocol MJVoiceInputProcessorDelegate <NSObject>
- (void)audioDecibelDidUpdate:(const void *)arg1;
- (void)onUpdateSentenceInfo:(unsigned int)arg1;
- (void)onProcessedVoiceInputSavedAtPath:(NSString *)arg1 error:(NSError *)arg2;
- (void)onVoiceInputDataSliceProcessed:(NSData *)arg1 sliceIndex:(unsigned int)arg2 isEnd:(_Bool)arg3;
@end

