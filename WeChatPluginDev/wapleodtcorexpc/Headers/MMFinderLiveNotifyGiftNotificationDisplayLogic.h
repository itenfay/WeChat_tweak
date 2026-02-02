//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, MMFinderLiveNotifyGiftNotificationView, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLiveNotifyGiftNotificationDisplayLogic : NSObject
{
    _Bool _enableDisplay;
    _Bool _needHidden;
    FinderJumpInfo *_curDisplayItem;
    CDUnknownBlockType _displayBlock;
    MMFinderLiveNotifyGiftNotificationView *_mainView;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_pendingQueue;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needHidden; // @synthesize needHidden=_needHidden;
@property(nonatomic) _Bool enableDisplay; // @synthesize enableDisplay=_enableDisplay;
@property(retain, nonatomic) NSMutableArray *pendingQueue; // @synthesize pendingQueue=_pendingQueue;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveNotifyGiftNotificationView *mainView; // @synthesize mainView=_mainView;
@property(copy, nonatomic) CDUnknownBlockType displayBlock; // @synthesize displayBlock=_displayBlock;
@property(retain, nonatomic) FinderJumpInfo *curDisplayItem; // @synthesize curDisplayItem=_curDisplayItem;
- (void)delayFadeout;
- (void)checkDisplay;
- (void)updateMainViewDisplay;
- (void)updateMainViewHidden:(_Bool)arg1;
- (void)updateNotificationViewEnableDisplay:(_Bool)arg1;
- (void)appendNotifyGiftNotification:(id)arg1;
- (id)initWithNotificationView:(id)arg1 taskId:(id)arg2;

@end

