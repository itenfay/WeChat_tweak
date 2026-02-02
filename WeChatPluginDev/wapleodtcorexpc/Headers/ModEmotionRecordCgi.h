//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ModEmotionRecordCgi
{
    _Bool _active;
    CDUnknownBlockType _onFailBlock;
    CDUnknownBlockType _onSuccessBlock;
    NSString *_pid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) CDUnknownBlockType onSuccessBlock; // @synthesize onSuccessBlock=_onSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType onFailBlock; // @synthesize onFailBlock=_onFailBlock;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startRequestWithOpCode:(int)arg1 pid:(id)arg2;
- (id)init;

@end

