//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJMusicInfo;

@interface OMJMusicOptions : NSObject
{
    OMJMusicInfo *_musicInfo;
    unsigned long long _sourceType;
    shared_ptr_c29e59e1 _backingInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_c29e59e1 backingInfo; // @synthesize backingInfo=_backingInfo;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) OMJMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicInfo:(id)arg1 sourceType:(unsigned long long)arg2;
- (id)initWithBackingMusicInfo:(const void *)arg1 sourceType:(unsigned long long)arg2;

@end

