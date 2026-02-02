//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderTipsShowInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderTimelineRedDotBubbleDisplayInfo : NSObject
{
    FinderTipsShowInfo *_showInfo;
    double _showSeconds;
    long long _category;
    WCFinderRedDotCtrlInfo *_findEntryRedCtrlInfo;
}

+ (id)infoWithShowInfo:(id)arg1 ctrlInfo:(id)arg2 category:(long long)arg3 showSeconds:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *findEntryRedCtrlInfo; // @synthesize findEntryRedCtrlInfo=_findEntryRedCtrlInfo;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) double showSeconds; // @synthesize showSeconds=_showSeconds;
@property(retain, nonatomic) FinderTipsShowInfo *showInfo; // @synthesize showInfo=_showInfo;

@end

