//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol MessageWrapImgDelegate <NSObject>

@optional
- (void)onModMsgByBitSet:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 BitSet:(unsigned int)arg3;
- (CMessageWrap *)onGetMsg:(NSString *)arg1 LocalID:(unsigned int)arg2 Wrap:(CMessageWrap *)arg3;
- (void)onGetBigImageErrorWithWrap:(CMessageWrap *)arg1;
- (void)onGetBigImageResultWithWrap:(CMessageWrap *)arg1 isSaveImgOK:(_Bool)arg2;
- (void)onUploadImageRequestWithWrap:(CMessageWrap *)arg1;
@end

