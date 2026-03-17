//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IRecordDownloadExt <NSObject>

@optional
- (void)OnRecordMessageDownloadOK:(CMessageWrap *)arg1;
- (void)OnDownloadRecordMessagePart:(CMessageWrap *)arg1 DataId:(NSString *)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordMessageOK:(CMessageWrap *)arg1 DataId:(NSString *)arg2 bThumb:(_Bool)arg3;
- (void)OnDownloadRecordMessageFail:(CMessageWrap *)arg1 DataId:(NSString *)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageExpired:(CMessageWrap *)arg1 DataId:(NSString *)arg2;
@end

