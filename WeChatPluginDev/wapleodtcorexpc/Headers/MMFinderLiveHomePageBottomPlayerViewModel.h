//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSString, WCFinderContact;

@interface MMFinderLiveHomePageBottomPlayerViewModel : NSObject
{
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_liveAnchorName;
    NSString *_liveTitleDescription;
    WCFinderContact *_anchorContact;
    unsigned long long _playBtnStatus;
    double _bottomPlayerViewHeight;
    double _bottomPlayerViewTop;
    struct CGSize _liveContainerSize;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomPlayerViewTop; // @synthesize bottomPlayerViewTop=_bottomPlayerViewTop;
@property(nonatomic) double bottomPlayerViewHeight; // @synthesize bottomPlayerViewHeight=_bottomPlayerViewHeight;
@property(nonatomic) struct CGSize liveContainerSize; // @synthesize liveContainerSize=_liveContainerSize;
@property(nonatomic) unsigned long long playBtnStatus; // @synthesize playBtnStatus=_playBtnStatus;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) NSString *liveTitleDescription; // @synthesize liveTitleDescription=_liveTitleDescription;
@property(retain, nonatomic) NSString *liveAnchorName; // @synthesize liveAnchorName=_liveAnchorName;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)liveTask;
- (void)adjustBottomPlayerSubviewsSize;
- (double)getLiveViewHeightPerWidthPercent;
- (void)onEnterForeground;
- (void)pauseLive;
- (void)playLive;
- (id)initWithLiveTaskId:(id)arg1;

@end

