//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TAVVideoRangeContentView, UIImage;

@protocol TAVVideoRangeContentViewDataSource <NSObject>
- (UIImage *)videoRangeContent:(TAVVideoRangeContentView *)arg1 imageAtIndex:(long long)arg2 preferredSize:(struct CGSize)arg3;
- (long long)videoRangeContentViewNumberOfImages:(TAVVideoRangeContentView *)arg1;

@optional
- (_Bool)videoRangeContent:(TAVVideoRangeContentView *)arg1 hasCacheAtIndex:(long long)arg2;
@end

