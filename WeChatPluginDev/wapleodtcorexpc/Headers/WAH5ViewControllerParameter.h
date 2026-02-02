//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface WAH5ViewControllerParameter : NSObject
{
    _Bool _disableShareMenu;
    _Bool _presentModal;
    _Bool _isForceRotateToPortrait;
    _Bool _useOfflinePkgIfExist;
    NSURL *_url;
    NSNumber *_isForceFullScreen;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useOfflinePkgIfExist; // @synthesize useOfflinePkgIfExist=_useOfflinePkgIfExist;
@property(nonatomic) _Bool isForceRotateToPortrait; // @synthesize isForceRotateToPortrait=_isForceRotateToPortrait;
@property(retain, nonatomic) NSNumber *isForceFullScreen; // @synthesize isForceFullScreen=_isForceFullScreen;
@property(nonatomic) _Bool presentModal; // @synthesize presentModal=_presentModal;
@property(nonatomic) _Bool disableShareMenu; // @synthesize disableShareMenu=_disableShareMenu;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

@end

