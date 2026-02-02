//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicLiveCommentModel;

@protocol MMMusicLiveCommentModelDelegate <NSObject>
- (void)liveCommentModel:(MMMusicLiveCommentModel *)arg1 didModifiedDataAt:(unsigned long long)arg2;
- (void)liveCommentModelDidAddNotice:(MMMusicLiveCommentModel *)arg1;
- (void)liveCommentModelDidAppendData:(MMMusicLiveCommentModel *)arg1;
@end

