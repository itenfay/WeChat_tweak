//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol MsgDataDownloadDelegate <NSObject>

@optional
- (void)onDownloadCancel:(CMessageWrap *)arg1;
- (void)onDownloadCommonFail:(CMessageWrap *)arg1;
- (void)onDownloadExpireFail:(CMessageWrap *)arg1;
- (void)onDownloadPart:(CMessageWrap *)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadSuccess:(CMessageWrap *)arg1;
@end

