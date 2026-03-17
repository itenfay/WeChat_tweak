//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CheckTmplVerResp_TmplInfo, MPPageTemplateInfo, NSString;

@protocol IMPPageFastLoadExtensionEvent <NSObject>

@optional
- (void)onTemplateType:(unsigned int)arg1 downloadEndWithEvent:(unsigned int)arg2 checkTmplInfo:(CheckTmplVerResp_TmplInfo *)arg3 templateInfo:(MPPageTemplateInfo *)arg4 descMsg:(NSString *)arg5;
- (void)onTemplateType:(unsigned int)arg1 downloadStateChanged:(unsigned int)arg2 checkTmplInfo:(CheckTmplVerResp_TmplInfo *)arg3 templateInfo:(MPPageTemplateInfo *)arg4;
@end

