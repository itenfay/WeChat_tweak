//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TAVResourceTrackInfo;

@protocol TAVResourceTrackInfoProvider <NSObject>
- (TAVResourceTrackInfo *)trackInfoForType:(NSString *)arg1 atIndex:(long long)arg2;
@end

