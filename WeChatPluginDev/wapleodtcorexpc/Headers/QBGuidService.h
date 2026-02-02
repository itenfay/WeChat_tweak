//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface QBGuidService
{
}

+ (void)saveGuidData:(id)arg1 returnCode:(long long)arg2;
+ (id)service;
- (id)getGuidWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getGuidWithTrigeredType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

