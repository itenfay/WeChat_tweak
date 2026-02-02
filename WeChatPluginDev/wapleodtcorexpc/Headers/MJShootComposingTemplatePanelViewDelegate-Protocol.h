//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingTemplatePanelView, MMCameraTemplateItem;

@protocol MJShootComposingTemplatePanelViewDelegate <NSObject>

@optional
- (void)shootTemplatePanelView:(MJShootComposingTemplatePanelView *)arg1 didSelectTab:(unsigned long long)arg2;
- (void)shootTemplatePanelView:(MJShootComposingTemplatePanelView *)arg1 didEndDisplayingTemplateItem:(MMCameraTemplateItem *)arg2 tabID:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)shootTemplatePanelView:(MJShootComposingTemplatePanelView *)arg1 willDisplayTemplateItem:(MMCameraTemplateItem *)arg2 tabID:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)shootTemplatePanelView:(MJShootComposingTemplatePanelView *)arg1 didSelectItem:(MMCameraTemplateItem *)arg2 tabID:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
@end

