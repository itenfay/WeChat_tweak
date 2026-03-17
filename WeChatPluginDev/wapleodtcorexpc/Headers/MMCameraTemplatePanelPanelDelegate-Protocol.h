//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCameraTemplateItem, MMCameraTemplatePanel, MMCameraTemplatePanelReportObj;

@protocol MMCameraTemplatePanelPanelDelegate <NSObject>
- (void)cameraTemplatePanelFetchDataDidFail:(MMCameraTemplatePanel *)arg1;
- (MMCameraTemplatePanelReportObj *)cameraEffectPanelGetReportObj;
- (void)cameraTemplatePanelDataDidChange:(MMCameraTemplatePanel *)arg1;
- (void)cameraTemplatePanelDidSelectItem:(MMCameraTemplateItem *)arg1 atIndex:(unsigned long long)arg2 inPanel:(MMCameraTemplatePanel *)arg3;
@end

