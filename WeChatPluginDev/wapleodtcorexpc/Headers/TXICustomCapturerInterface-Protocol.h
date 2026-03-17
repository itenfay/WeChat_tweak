//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCVideoFrame;

@protocol TXICustomCapturerInterface <NSObject>
- (void)enableTranscodingMode:(_Bool)arg1;
- (void)sendVideoFrame:(TXCVideoFrame *)arg1;
@end

