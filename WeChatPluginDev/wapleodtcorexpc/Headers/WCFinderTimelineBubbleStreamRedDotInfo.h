//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DelayBubble, FinderSyncTipsShowInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderTimelineBubbleStreamRedDotInfo : NSObject
{
    FinderSyncTipsShowInfo *_streamShowInfo;
    DelayBubble *_finderDeleyBubble;
    WCFinderRedDotCtrlInfo *_findEntryRedCtrlInfo;
}

+ (id)infoWithShowInfo:(id)arg1 ctrlInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *findEntryRedCtrlInfo; // @synthesize findEntryRedCtrlInfo=_findEntryRedCtrlInfo;
@property(retain, nonatomic) DelayBubble *finderDeleyBubble; // @synthesize finderDeleyBubble=_finderDeleyBubble;
@property(retain, nonatomic) FinderSyncTipsShowInfo *streamShowInfo; // @synthesize streamShowInfo=_streamShowInfo;

@end

