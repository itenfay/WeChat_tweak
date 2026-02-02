//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMImageDetectContext, MMImageDetectMediaInfo;

@protocol MMImageDetectUploaderDelegate <NSObject>
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(MMImageDetectContext *)arg2 detectMediaInfo:(MMImageDetectMediaInfo *)arg3;
@end

