//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderTemplateProcessVCOutPutParams, WCFinderTemplateProcessViewController;

@protocol WCFinderTemplateProcessViewControllerDelegate <NSObject>

@optional
- (void)finderTemplateProcessVC:(WCFinderTemplateProcessViewController *)arg1 didExportFinishWithPath:(NSString *)arg2 outputParams:(WCFinderTemplateProcessVCOutPutParams *)arg3;
@end

