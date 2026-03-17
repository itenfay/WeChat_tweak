//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LZFileCacheInfo : NSObject
{
    long long _seqNo;
    long long _syncOffset;
    struct _LzRange _writeRange;
}

@property(nonatomic) long long syncOffset; // @synthesize syncOffset=_syncOffset;
@property(nonatomic) struct _LzRange writeRange; // @synthesize writeRange=_writeRange;
@property(readonly, nonatomic) long long seqNo; // @synthesize seqNo=_seqNo;
- (id)initWithSeq:(long long)arg1;

@end

