//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveSticker, NSString;

@protocol MMFinderLiveStickerReviewSubmissionItem <NSObject>
@property(readonly, nonatomic) _Bool readyForSubmission;
@property(readonly, nonatomic) NSString *submissionId;
- (FinderLiveSticker *)createSubmissionEntity;
- (void)prepareForSubmissionWithCompletionBlock:(void (^)(_Bool))arg1;
@end

