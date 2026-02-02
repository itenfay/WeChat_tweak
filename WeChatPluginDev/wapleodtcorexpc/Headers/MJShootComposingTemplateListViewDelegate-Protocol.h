//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingTemplateListView, MMCameraTemplateItem;

@protocol MJShootComposingTemplateListViewDelegate <NSObject>

@optional
- (_Bool)shouldUseEmptyTemplateAsDefaultInListView:(MJShootComposingTemplateListView *)arg1;
- (void)shootComposingTemplateListViewFetchTargetTemplateFailed:(MJShootComposingTemplateListView *)arg1;
- (void)shootComposingTemplateListViewFetchDataDidFail:(MJShootComposingTemplateListView *)arg1;
- (void)shootComposingTemplateListViewDataDidChange:(MJShootComposingTemplateListView *)arg1;
- (void)shootComposingTemplateListView:(MJShootComposingTemplateListView *)arg1 didFirstTimeLoadingTemplateItem:(MMCameraTemplateItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(MJShootComposingTemplateListView *)arg1 didEndDisplayingTemplateItem:(MMCameraTemplateItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(MJShootComposingTemplateListView *)arg1 willDisplayTemplateItem:(MMCameraTemplateItem *)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplateListView:(MJShootComposingTemplateListView *)arg1 didSelectTemplateItem:(MMCameraTemplateItem *)arg2 atIndex:(unsigned long long)arg3;
@end

