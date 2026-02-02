//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCStoryPostCgiObj
{
    unsigned int _createTime;
    CDUnknownBlockType _postFailBlock;
    CDUnknownBlockType _postSuccessBlock;
    CDUnknownBlockType _postHadRecieveRespBlock;
    NSString *_tid;
    NSString *_videoMd5;
    NSString *_postXml;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *postXml; // @synthesize postXml=_postXml;
@property(retain, nonatomic) NSString *videoMd5; // @synthesize videoMd5=_videoMd5;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) CDUnknownBlockType postHadRecieveRespBlock; // @synthesize postHadRecieveRespBlock=_postHadRecieveRespBlock;
@property(copy, nonatomic) CDUnknownBlockType postSuccessBlock; // @synthesize postSuccessBlock=_postSuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType postFailBlock; // @synthesize postFailBlock=_postFailBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)onUploadSuccessWithResponse:(id)arg1;
- (id)initWithTaskInfo:(id)arg1;

@end

