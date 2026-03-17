//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKDate, MMKDatePickerViewOnSelectCallback, NSString;

@protocol MMKDatePickerView <MMKView>
- (void)setOnSelectCallback:(MMKDatePickerViewOnSelectCallback *)arg1;
- (_Bool)getCanBeLongTerm;
- (void)setCanBeLongTerm:(_Bool)arg1;
- (NSString *)getValue;
- (void)setValue:(NSString *)arg1;
- (long long)getType;
- (void)setType:(long long)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (MMKDate *)currentDate;
- (int)yearOfNow;
- (long long)timeForDate:(MMKDate *)arg1;
- (MMKDate *)getSelectedDate;
- (void)setHint:(NSString *)arg1;
- (MMKDate *)getEndDate;
- (MMKDate *)getStartDate;
- (void)setEndDate:(MMKDate *)arg1;
- (void)setStartDate:(MMKDate *)arg1;
- (void)setOriginDate:(int)arg1 month:(int)arg2 day:(int)arg3;
@end

