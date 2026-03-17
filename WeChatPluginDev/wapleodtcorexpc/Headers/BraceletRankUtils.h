//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BraceletRankUtils : NSObject
{
}

+ (id)filterSportGoal:(id)arg1;
+ (id)filterSportRecord:(id)arg1;
+ (id)categoryRecordByAppId:(id)arg1;
+ (id)parseJSONDataFromRecord:(id)arg1;
+ (double)calculateSportViewHeightWithSportRecords:(id)arg1 sportGoals:(id)arg2;
+ (id)generateBrandIcon:(id)arg1 color:(id)arg2;
- (id)generateShareFriendMessageByImage:(id)arg1;
- (id)generateUploadTaskByImage:(id)arg1;
- (id)generateShareImage:(id)arg1 Rank:(unsigned int)arg2 Steps:(unsigned int)arg3;
- (id)getImageView:(id)arg1 Rank:(unsigned int)arg2 Steps:(unsigned int)arg3;

@end

