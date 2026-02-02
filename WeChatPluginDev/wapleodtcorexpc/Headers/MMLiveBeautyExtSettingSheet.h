//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveBeautyExtSettingCard, MMLiveTaskId, NSString;

@interface MMLiveBeautyExtSettingSheet
{
    int _entry;
    MMLiveTaskId *_taskId;
    MMLiveBeautyExtSettingCard *_faceOccuSettingCard;
}

+ (id)showChangeFilterNoticeViewWith:(id)arg1;
+ (id)showWithTaskId:(id)arg1;
+ (id)showChangeFilterNoticeViewWith:(id)arg1 entry:(int)arg2;
+ (id)showWithTaskId:(id)arg1 entry:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautyExtSettingCard *faceOccuSettingCard; // @synthesize faceOccuSettingCard=_faceOccuSettingCard;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int entry; // @synthesize entry=_entry;
- (void)switchDidChanged:(_Bool)arg1 card:(id)arg2;
- (_Bool)isInRoom;
- (id)beautyLogic;
- (id)liveTask;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)updateNavBarUI;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

