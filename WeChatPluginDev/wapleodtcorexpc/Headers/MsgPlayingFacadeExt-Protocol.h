//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol MsgPlayingFacadeExt <NSObject>

@optional
- (void)onAutoPlayEndWithMsg:(CMessageWrap *)arg1;
- (void)onEndPlayingMsg:(CMessageWrap *)arg1 autoPlayEnabled:(_Bool)arg2;
- (void)onBeginPlayingMsg:(CMessageWrap *)arg1 autoPlayEnabled:(_Bool)arg2;
@end

