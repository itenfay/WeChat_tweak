//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TPSubtitleParserWrapper;

@protocol TPSubtitleParserWrapperCallback <NSObject>
- (void)onSubtitleNote:(NSString *)arg1;
- (void)onSubtitleFrame:(struct TPFrame *)arg1;
- (long long)onGetCurrentPlayPositionMs;
- (void)onSubtitleError:(int)arg1 errorCode:(int)arg2;
- (void)onSelectResult:(TPSubtitleParserWrapper *)arg1 errorCode:(int)arg2 opaque:(long long)arg3;
- (void)onLoadResult:(TPSubtitleParserWrapper *)arg1 errorCode:(int)arg2;
@end

