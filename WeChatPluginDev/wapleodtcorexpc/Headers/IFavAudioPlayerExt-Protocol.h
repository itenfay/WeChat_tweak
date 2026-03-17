//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IFavAudioPlayerExt <NSObject>

@optional
- (void)OnEarTip;
- (void)OnAudioPlaying:(NSString *)arg1 Offset:(unsigned int)arg2;
- (void)OnPlayError:(NSString *)arg1;
- (void)OnEndPlay:(NSString *)arg1;
- (void)OnBeginPlay:(NSString *)arg1;
@end

