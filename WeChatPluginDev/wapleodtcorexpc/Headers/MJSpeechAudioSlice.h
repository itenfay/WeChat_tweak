//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MJSpeechAudioSlice
{
    _Bool _isEnd;
    unsigned long long _index;
    unsigned long long _offset;
    unsigned long long _totalDataLength;
}

@property(readonly, nonatomic) unsigned long long totalDataLength; // @synthesize totalDataLength=_totalDataLength;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)description;
- (id)initWithData:(id)arg1 encodeType:(long long)arg2 index:(unsigned long long)arg3 isEnd:(_Bool)arg4 offset:(unsigned long long)arg5 totalDataLength:(unsigned long long)arg6;

@end

