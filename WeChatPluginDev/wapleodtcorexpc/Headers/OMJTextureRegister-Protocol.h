//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol OMJTextureHolder;

@protocol OMJTextureRegister <NSObject>
- (void)textureFrameAvailableWithID:(long long)arg1;
- (void)unregisterTextureWithID:(long long)arg1;
- (long long)registerTextureWithHolder:(id <OMJTextureHolder>)arg1;
@end

