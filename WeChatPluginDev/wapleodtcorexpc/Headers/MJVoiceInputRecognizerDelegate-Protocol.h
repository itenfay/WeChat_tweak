//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString;

@protocol MJVoiceInputRecognizerDelegate <NSObject>
- (void)onRecognitionStateUpdated:(unsigned long long)arg1 identifier:(NSString *)arg2;
- (void)onRecognitionFinishedWithResult:(NSArray *)arg1 resultIndex:(unsigned int)arg2 identifier:(NSString *)arg3 error:(NSError *)arg4;
- (void)onRecognitionResultUpdated:(NSArray *)arg1 resultIndex:(unsigned int)arg2 identifier:(NSString *)arg3 error:(NSError *)arg4;
@end

