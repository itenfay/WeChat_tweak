//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJLyricInfo : NSObject
{
    NSString *_content;
    NSString *_subContent;
    shared_ptr_10b9d6f7 _backingInfo;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_10b9d6f7 backingInfo; // @synthesize backingInfo=_backingInfo;
@property(readonly, nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *subContent; // @synthesize subContent=_subContent;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContent:(id)arg1 subContent:(id)arg2 startTime:(CDStruct_1b6d18a9)arg3 endTime:(CDStruct_1b6d18a9)arg4;
- (id)initWithContent:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 endTime:(CDStruct_1b6d18a9)arg3;
- (id)initWithBackingInfo:(const void *)arg1;

@end

