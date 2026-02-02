//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MagicBrushCore, NSString;

@protocol WAJITBindingMediaModuleDelegate <NSObject>

@optional
- (MagicBrushCore *)getMBCore;
- (NSString *)getAudioFilePath:(NSString *)arg1;
@end

