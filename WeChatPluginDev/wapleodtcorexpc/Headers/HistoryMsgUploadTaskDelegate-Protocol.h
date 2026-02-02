//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, HistoryMsgUploadTask;

@protocol HistoryMsgUploadTaskDelegate <NSObject>
- (void)onUploadTaskFailWithMsg:(CMessageWrap *)arg1 uploadTask:(HistoryMsgUploadTask *)arg2;
- (void)onUploadTaskSuccessWithMsg:(CMessageWrap *)arg1 uploadTask:(HistoryMsgUploadTask *)arg2;
@end

