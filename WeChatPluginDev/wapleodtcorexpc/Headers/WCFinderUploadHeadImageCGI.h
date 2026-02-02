//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderUploadHeadImageCGI
{
    unsigned int _imageDataTotalLength;
    unsigned int _currentTaskStartPos;
    NSString *_imageDataMD5;
    NSData *_imageData;
    unsigned long long _scene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBolck;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBolck; // @synthesize failureBolck=_failureBolck;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned int currentTaskStartPos; // @synthesize currentTaskStartPos=_currentTaskStartPos;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned int imageDataTotalLength; // @synthesize imageDataTotalLength=_imageDataTotalLength;
@property(retain, nonatomic) NSString *imageDataMD5; // @synthesize imageDataMD5=_imageDataMD5;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithScene:(unsigned long long)arg1 avatarData:(id)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

