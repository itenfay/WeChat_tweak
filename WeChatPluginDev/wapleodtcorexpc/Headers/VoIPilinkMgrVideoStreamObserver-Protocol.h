//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol VoIPilinkMgrVideoStreamObserver <NSObject>
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)shouldIgnoreDefaultRender;
@end

