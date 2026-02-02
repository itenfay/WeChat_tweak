//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class OMJID;

@protocol OMCThumbnailProvider <NSObject>
@property(readonly, nonatomic) OMJID *segmentID;
- (void)reopen;
- (void)cancelAllTasks;
- (void)cancelTask:(long long)arg1;
- (long long)requestThumbnailAtTimeRange:(CDStruct_e83c9415)arg1 resultHandler:(void (^)(UIImage *, struct, unsigned long long, long long))arg2;
- (long long)requestThumbnailAtTime:(CDStruct_1b6d18a9)arg1 resultHandler:(void (^)(UIImage *, struct, unsigned long long, long long))arg2;
@end

