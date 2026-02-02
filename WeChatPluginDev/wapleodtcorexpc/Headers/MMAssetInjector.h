//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAssetInfo, NSString;

@interface MMAssetInjector : NSObject
{
    _Bool _isEditable;
    _Bool _shouldForceSelect;
    _Bool _shouldLoadUnedited;
    _Bool _shouldLoadEditOverlay;
    _Bool _shouldHideEditPageTopRightEntrance;
    _Bool _shouldKeepTimeRange;
    NSString *_errorInfo;
    MMAssetInfo *_boundAsset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetInfo *boundAsset; // @synthesize boundAsset=_boundAsset;
@property(nonatomic) _Bool shouldKeepTimeRange; // @synthesize shouldKeepTimeRange=_shouldKeepTimeRange;
@property(nonatomic) _Bool shouldHideEditPageTopRightEntrance; // @synthesize shouldHideEditPageTopRightEntrance=_shouldHideEditPageTopRightEntrance;
@property(nonatomic) _Bool shouldLoadEditOverlay; // @synthesize shouldLoadEditOverlay=_shouldLoadEditOverlay;
@property(nonatomic) _Bool shouldLoadUnedited; // @synthesize shouldLoadUnedited=_shouldLoadUnedited;
@property(nonatomic) _Bool shouldForceSelect; // @synthesize shouldForceSelect=_shouldForceSelect;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;

@end

