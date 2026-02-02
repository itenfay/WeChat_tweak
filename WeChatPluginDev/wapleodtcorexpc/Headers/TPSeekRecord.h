//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TPSeekRecord : NSObject
{
    _Bool _isSeeking;
    unsigned long long _lastEvent;
    long long _seekBufferedCount;
    NSMutableArray *_seekItemArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *seekItemArray; // @synthesize seekItemArray=_seekItemArray;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) long long seekBufferedCount; // @synthesize seekBufferedCount=_seekBufferedCount;
@property(nonatomic) unsigned long long lastEvent; // @synthesize lastEvent=_lastEvent;

@end

