//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingTemplatePageView, MMCameraTemplateItem;

@protocol MJShootComposingTemplatePageViewDelegate <NSObject>

@optional
- (void)shootComposingTemplatePageView:(MJShootComposingTemplatePageView *)arg1 didEndDisplayingTemplateItem:(MMCameraTemplateItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplatePageView:(MJShootComposingTemplatePageView *)arg1 willDisplayTemplateItem:(MMCameraTemplateItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplatePageView:(MJShootComposingTemplatePageView *)arg1 didSelectItem:(MMCameraTemplateItem *)arg2 atIndex:(unsigned long long)arg3;
@end

