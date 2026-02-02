//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CommRequestSource, NSString;

@interface WAContactUpdateTaskWrap
{
    _Bool _isForce;
    unsigned long long _updateType;
    NSString *_updateKey;
    CommRequestSource *_requestSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CommRequestSource *requestSource; // @synthesize requestSource=_requestSource;
@property(nonatomic) _Bool isForce; // @synthesize isForce=_isForce;
@property(copy, nonatomic) NSString *updateKey; // @synthesize updateKey=_updateKey;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
- (_Bool)isEqualToTaskWrap:(id)arg1;

@end

