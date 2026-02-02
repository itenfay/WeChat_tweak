//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GCCommonServer
{
}

- (void)getRemindUserList:(id)arg1 context:(id)arg2 pageLimit:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)pullUserMessageWithData:(unsigned int)arg1 andTransData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)reportEmptyGameRedpoint:(CDUnknownBlockType)arg1;
- (void)getLiteConfig:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

