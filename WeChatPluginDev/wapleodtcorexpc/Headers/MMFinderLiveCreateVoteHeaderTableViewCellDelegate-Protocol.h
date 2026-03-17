//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCreateVoteHeaderTableViewCell, NSString;

@protocol MMFinderLiveCreateVoteHeaderTableViewCellDelegate <NSObject>

@optional
- (void)createVoteHeaderCellDidClickDurationLimitButton:(MMFinderLiveCreateVoteHeaderTableViewCell *)arg1;
- (void)createVoteHeaderCellDidClickSelectionTypeButton:(MMFinderLiveCreateVoteHeaderTableViewCell *)arg1;
- (void)createVoteHeaderCellDidEndEditing:(MMFinderLiveCreateVoteHeaderTableViewCell *)arg1;
- (void)createVoteHeaderCellWillBeginEditing:(MMFinderLiveCreateVoteHeaderTableViewCell *)arg1;
- (_Bool)createVoteHeaderCellShouldBeginEditing:(MMFinderLiveCreateVoteHeaderTableViewCell *)arg1;
- (void)createVoteHeaderCell:(MMFinderLiveCreateVoteHeaderTableViewCell *)arg1 didUpdateQuestion:(NSString *)arg2;
@end

