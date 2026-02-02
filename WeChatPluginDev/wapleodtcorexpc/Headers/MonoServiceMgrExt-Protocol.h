//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AudioMonoServiceObj, VideoMonoServiceObj;

@protocol MonoServiceMgrExt <NSObject>

@optional
- (void)onVideoMonoServiceBussinessRemoved:(VideoMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
- (void)onVideoMonoServiceBussinessAdded:(VideoMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
- (void)onAudioMonoServiceBussinessRemoved:(AudioMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
- (void)onAudioMonoServiceBussinessAdded:(AudioMonoServiceObj *)arg1 inMainScene:(_Bool)arg2;
@end

