//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableData;

@interface LZLargeFileCache
{
    long long _curFileOffset;
    NSMutableData *_readBufData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *readBufData; // @synthesize readBufData=_readBufData;
@property(nonatomic) long long curFileOffset; // @synthesize curFileOffset=_curFileOffset;
- (_Bool)readFileInner:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
- (_Bool)openFileAndSetupMapInner:(id)arg1;
- (void)releaseMapping;
- (void)endRead:(id)arg1;
- (void)finishWirte:(id)arg1;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isFinish:(_Bool *)arg3;
- (id)initWithFile:(id)arg1 queue:(id)arg2 context:(void *)arg3 type:(unsigned long long)arg4;
- (id)init;

@end

