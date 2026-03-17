//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol RTEAttachmentNativeItemBase <NSObject>

@optional
- (int)getDataType;
- (_Bool)isRecording;
- (float)getVoiceDuration;
- (NSString *)getDisplayThumbPath;
- (NSString *)getAttachmentId;
- (int)getAttachmentType;
- (NSString *)getDesc;
- (NSString *)getTitle;
@end

