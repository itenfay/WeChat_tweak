//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UploadVoiceWrap;

@protocol UploadVoiceDelegate <NSObject>

@optional
- (void)onCdnUploadFail:(UploadVoiceWrap *)arg1;
- (void)OnPartSent:(UploadVoiceWrap *)arg1 ErrNo:(unsigned int)arg2;
@end

