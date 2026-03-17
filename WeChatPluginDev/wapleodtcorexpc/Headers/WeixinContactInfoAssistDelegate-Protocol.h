//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, TextStateProfileCardContentView;

@protocol WeixinContactInfoAssistDelegate <NSObject>
- (void)onTextStateExpand;
- (void)onTextStateJumpRedEnvelope;
- (void)onTextStateJumpTopicSquare;
- (void)onTextStateRefCurrent;
- (void)onTextStateJumpSource;
- (void)onTextStateDetailContentViewGenerated:(TextStateProfileCardContentView *)arg1 fittingHeight:(double)arg2;
- (void)addHeadViewElementToTextStateAnimateHelper:(NSArray *)arg1;
@end

