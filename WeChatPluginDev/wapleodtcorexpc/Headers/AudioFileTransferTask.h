//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AudioFileTransferInfo;

@interface AudioFileTransferTask : NSObject
{
    AudioFileTransferInfo *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AudioFileTransferInfo *info; // @synthesize info=_info;
- (id)promiseTransferedFile;
- (id)initWithInfo:(id)arg1;

@end

