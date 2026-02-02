//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ITPPlayerRichMediaProcessorWrapper;

@protocol ITPPlayerRichMediaProcessorWrapperCallback <NSObject>
- (void)onRichMediaProcessor:(id <ITPPlayerRichMediaProcessorWrapper>)arg1 infoType:(int)arg2 param1:(long long)arg3 param2:(long long)arg4 param3:(long long)arg5 object:(void *)arg6;
- (void)onRichMediaFeatureFailure:(id <ITPPlayerRichMediaProcessorWrapper>)arg1 richMediaIndex:(int)arg2 errorCode:(int)arg3;
- (void)onDeselectFeatureSuccess:(id <ITPPlayerRichMediaProcessorWrapper>)arg1 richMediaIndex:(int)arg2;
- (void)onSelectFeatureSuccess:(id <ITPPlayerRichMediaProcessorWrapper>)arg1 richMediaIndex:(int)arg2;
- (void)onRichMediaProcessor:(id <ITPPlayerRichMediaProcessorWrapper>)arg1 errorCode:(int)arg2;
- (void)onRichMediaProcessor:(id <ITPPlayerRichMediaProcessorWrapper>)arg1 richMediaIndex:(int)arg2 featureData:(const void *)arg3;
- (void)onRichMediaProcessorPrepared:(id <ITPPlayerRichMediaProcessorWrapper>)arg1;
@end

