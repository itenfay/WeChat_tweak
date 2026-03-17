//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJTemplateCoreManager, NSError, NSString, UIImage;

@protocol MJTemplateExportTaskExt <NSObject>
- (void)templateCoreManager:(MJTemplateCoreManager *)arg1 exportTaskDidCancelWithTaskID:(NSString *)arg2;
- (void)templateCoreManager:(MJTemplateCoreManager *)arg1 exportTaskDidFailWithTaskID:(NSString *)arg2 error:(NSError *)arg3;
- (void)templateCoreManager:(MJTemplateCoreManager *)arg1 exportTaskDidFinishWithTaskID:(NSString *)arg2 outputFilePath:(NSString *)arg3;
- (void)templateCoreManager:(MJTemplateCoreManager *)arg1 videoFrameDidUpdate:(UIImage *)arg2 taskID:(NSString *)arg3;
- (void)templateCoreManager:(MJTemplateCoreManager *)arg1 exportProgressDidChange:(float)arg2 taskID:(NSString *)arg3;
@end

