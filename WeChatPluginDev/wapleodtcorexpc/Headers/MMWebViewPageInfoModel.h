//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWebViewPageInfoModel : NSObject
{
    _Bool _disableContextMenu;
    _Bool _disableExposeAlert;
    _Bool _hasSetDisableExposeAlert;
    unsigned long long _lastClickTs;
    struct CGPoint _lastClickPos;
}

@property(nonatomic) _Bool hasSetDisableExposeAlert; // @synthesize hasSetDisableExposeAlert=_hasSetDisableExposeAlert;
@property(nonatomic) _Bool disableExposeAlert; // @synthesize disableExposeAlert=_disableExposeAlert;
@property(nonatomic) _Bool disableContextMenu; // @synthesize disableContextMenu=_disableContextMenu;
@property(nonatomic) unsigned long long lastClickTs; // @synthesize lastClickTs=_lastClickTs;
@property(nonatomic) struct CGPoint lastClickPos; // @synthesize lastClickPos=_lastClickPos;

@end

