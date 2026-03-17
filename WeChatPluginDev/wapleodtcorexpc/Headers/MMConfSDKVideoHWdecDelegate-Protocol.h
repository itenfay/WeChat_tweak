//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMConfSDKVideoHWdecDelegate <NSObject>
- (int)CloseHWDecoder:(int)arg1 codecType:(int)arg2;
- (void)gotDecVideoFrame:(int)arg1 Frame:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 format:(int)arg5;
@end

