//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCameraEffectPanelViewModel;

@protocol MMCameraEffectPanelViewModelDelegate <NSObject>

@optional
- (void)cameraEffectPanelViewModelDidFetchTemplateFail:(MMCameraEffectPanelViewModel *)arg1;
- (_Bool)cameraEffectPanelViewModelIsInChatRoom;
- (unsigned long long)cameraEffectPanelViewModelGetScene;
- (void)cameraEffectPanelViewModelDidFetchTemplateComplete:(MMCameraEffectPanelViewModel *)arg1;
@end

