//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface ShakeMusicQueueItem : NSObject
{
    unsigned int _seq;
    unsigned int _offset;
    unsigned int _endflag;
    unsigned int _tryCount;
    NSData *_data;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int tryCount; // @synthesize tryCount=_tryCount;
@property(nonatomic) unsigned int endflag; // @synthesize endflag=_endflag;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)debugDescription;

@end

