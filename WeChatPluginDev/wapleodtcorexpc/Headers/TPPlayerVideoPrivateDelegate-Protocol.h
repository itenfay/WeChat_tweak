//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPPlayerVideo;

@protocol TPPlayerVideoPrivateDelegate <NSObject>
- (void)skipEndPosDidChange:(TPPlayerVideo *)arg1;
- (void)startPosDidChange:(TPPlayerVideo *)arg1;
@end

