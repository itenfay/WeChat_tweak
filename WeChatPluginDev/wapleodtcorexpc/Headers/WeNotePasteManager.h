//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeNotePasteManager : NSObject
{
}

+ (void)resetCdnInfo:(id)arg1;
+ (id)getTempPathWithMd5:(id)arg1 isThumb:(_Bool)arg2 dataFmt:(id)arg3;
+ (id)getCopyAttachmentWith:(id)arg1;
+ (id)getCopyAttachmentNativeItemWith:(id)arg1;
+ (id)CopyAttachment:(id)arg1 copyScene:(int)arg2;
+ (void)reset;

@end

