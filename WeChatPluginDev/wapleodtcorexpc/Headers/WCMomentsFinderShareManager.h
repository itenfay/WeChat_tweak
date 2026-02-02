//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyWCDB;

@interface WCMomentsFinderShareManager : NSObject
{
    MyWCDB *_database;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MyWCDB *database; // @synthesize database=_database;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (_Bool)updateActionRecordFromLocalDataItem:(id)arg1 toServerDataItem:(id)arg2;
- (_Bool)hasActionRecordForDetailPageWithDataItem:(id)arg1;
- (void)markActionRecordForDetailPageWithDataItem:(id)arg1 action:(long long)arg2;
- (void)didClickShareButtonForDataItem:(id)arg1 inScene:(long long)arg2;
- (void)willDisplayShareButtonForDataItem:(id)arg1 inScene:(long long)arg2;
- (id)init;

@end

