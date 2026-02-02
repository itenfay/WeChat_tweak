//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MiniTaskConfigUtil
{
}

+ (_Bool)isOpenStarSwitch;
+ (double)createTimeOfFirstMiniTaskRecord;
+ (void)setHasAppendMiniTaskRecord;
+ (_Bool)hasAppendMiniTaskRecord;
+ (void)resetShowEducationViewRecord;
+ (_Bool)checkShouldShowEducationView;
+ (void)resetExitByRightEdgeGestureRecord;
+ (void)onExitByRightEdgeGestureOrEduLabel;
+ (_Bool)hasExitByRightEdgeGesture;
+ (unsigned int)miniTaskCardFullScreenTime;
+ (unsigned int)miniTaskRecordsMaxiumLimit;
+ (id)miniTaskConfigKv;

@end

