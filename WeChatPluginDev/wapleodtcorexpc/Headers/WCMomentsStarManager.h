//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyWCDB;

@interface WCMomentsStarManager : NSObject
{
    MyWCDB *_database;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MyWCDB *database; // @synthesize database=_database;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (_Bool)updateActionRecordFromLocalDataItem:(id)arg1 toServerDataItem:(id)arg2;
- (_Bool)hasStarGuideActionRecordForDetailPageWithDataItem:(id)arg1;
- (void)markStarGuideActionRecordForDetailPageWithDataItem:(id)arg1 action:(long long)arg2;
- (void)didClickStarGuideForDataItem:(id)arg1 inScene:(long long)arg2;
- (void)willDisplayStarGuideForDataItem:(id)arg1 inScene:(long long)arg2;
- (id)init;

@end

