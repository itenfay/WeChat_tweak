//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TPBufferedRecord : NSObject
{
    _Bool _isBuffering;
    NSMutableArray *_bufferedStepArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bufferedStepArray; // @synthesize bufferedStepArray=_bufferedStepArray;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;

@end

