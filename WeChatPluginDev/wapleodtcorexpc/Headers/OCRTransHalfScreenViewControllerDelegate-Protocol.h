//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"

@class MMImageDetectContext, MMImageDetectMediaInfo, NSString;

@protocol OCRTransHalfScreenViewControllerDelegate <MMUIHalfScreenViewControllerDelegate>
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(NSString *)arg2 reqKey:(NSString *)arg3 ocrResultType:(long long)arg4;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(MMImageDetectContext *)arg2 detectMediaInfo:(MMImageDetectMediaInfo *)arg3;
@end

