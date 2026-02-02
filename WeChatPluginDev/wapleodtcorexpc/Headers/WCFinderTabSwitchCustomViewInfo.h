//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderTabSwitchCustomViewInfo : NSObject
{
    Class _viewClass;
    CDUnknownBlockType _layout;
    CDUnknownBlockType _configer;
    CDUnknownBlockType _updater;
    struct UIEdgeInsets _customBarInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets customBarInsets; // @synthesize customBarInsets=_customBarInsets;
@property(copy, nonatomic) CDUnknownBlockType updater; // @synthesize updater=_updater;
@property(copy, nonatomic) CDUnknownBlockType configer; // @synthesize configer=_configer;
@property(copy, nonatomic) CDUnknownBlockType layout; // @synthesize layout=_layout;
@property(retain, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;

@end

