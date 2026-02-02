//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface WCFinderLiveShareCardExposeReportAdapter : NSObject
{
    _Bool _isLastEventAppear;
    CDUnknownBlockType _reportAction;
    NSDate *_lastAppearDate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLastEventAppear; // @synthesize isLastEventAppear=_isLastEventAppear;
@property(retain, nonatomic) NSDate *lastAppearDate; // @synthesize lastAppearDate=_lastAppearDate;
@property(copy, nonatomic) CDUnknownBlockType reportAction; // @synthesize reportAction=_reportAction;
- (void)onDisappear;
- (void)onAppear;

@end

