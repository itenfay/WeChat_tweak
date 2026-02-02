//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXCVideoDumper
{
    struct __sFILE *_file;
}

+ (id)dataFromFile:(id)arg1;
- (void)writeBytes:(const char *)arg1 length:(long long)arg2;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithFileName:(id)arg1;

@end

