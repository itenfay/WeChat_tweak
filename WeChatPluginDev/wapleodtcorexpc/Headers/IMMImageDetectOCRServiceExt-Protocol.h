//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMImageDetectContext, MMImageDetectMediaInfo, NSString;

@protocol IMMImageDetectOCRServiceExt <NSObject>

@optional
- (void)onImageDetectOCRFinish:(MMImageDetectContext *)arg1 resultType:(unsigned int)arg2 jsonStr:(NSString *)arg3 reqKey:(NSString *)arg4 ocrResultType:(long long)arg5;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(MMImageDetectContext *)arg2 detectMediaInfo:(MMImageDetectMediaInfo *)arg3;
@end

