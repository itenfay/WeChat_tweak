//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WAAuthManagerSectionViewModel, WAContact;

@interface WAAuthManagerListContainerViewModel : NSObject
{
    double _viewHeight;
    WAContact *_contact;
    WAAuthManagerSectionViewModel *_weappUserInfoViewModel;
    NSArray *_arrPluginUserInfoViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrPluginUserInfoViewModel; // @synthesize arrPluginUserInfoViewModel=_arrPluginUserInfoViewModel;
@property(retain, nonatomic) WAAuthManagerSectionViewModel *weappUserInfoViewModel; // @synthesize weappUserInfoViewModel=_weappUserInfoViewModel;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;

@end

