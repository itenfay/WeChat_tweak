//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderJustWatchContoller;

@interface WCFinderJustWatchJumpAction : NSObject
{
    _Bool _isIgnore;
    WCFinderJustWatchContoller *_watchCtrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isIgnore; // @synthesize isIgnore=_isIgnore;
@property(retain, nonatomic) WCFinderJustWatchContoller *watchCtrl; // @synthesize watchCtrl=_watchCtrl;
- (void)complete;
- (void)fail;
- (void)loading;
- (void)ignore;

@end

