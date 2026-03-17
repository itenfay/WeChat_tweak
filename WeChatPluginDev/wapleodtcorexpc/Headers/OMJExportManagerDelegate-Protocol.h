//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, OMJExportManager, UIImage;

@protocol OMJExportManagerDelegate <NSObject>

@optional
- (void)exportManager:(OMJExportManager *)arg1 serviceStateDidChange:(unsigned long long)arg2;
- (void)exportManager:(OMJExportManager *)arg1 videoFrameDidUpdate:(UIImage *)arg2 taskID:(NSString *)arg3;
- (void)exportManager:(OMJExportManager *)arg1 taskStateDidChangeWithTaskID:(NSString *)arg2 taskState:(unsigned long long)arg3 progress:(float)arg4 outputFilePath:(NSString *)arg5;
@end

