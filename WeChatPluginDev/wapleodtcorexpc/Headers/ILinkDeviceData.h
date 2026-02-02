//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, HwClientEncryptFileInfo, NSString;

@interface ILinkDeviceData : NSObject
{
    int _cdnFileType;
    int _cdnAppType;
    unsigned long long _scene;
    NSString *_encryptedFilePath;
    HwClientEncryptFileInfo *_clientEncryptInfo;
    CMessageWrap *_messageWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) HwClientEncryptFileInfo *clientEncryptInfo; // @synthesize clientEncryptInfo=_clientEncryptInfo;
@property(nonatomic) int cdnAppType; // @synthesize cdnAppType=_cdnAppType;
@property(nonatomic) int cdnFileType; // @synthesize cdnFileType=_cdnFileType;
@property(retain, nonatomic) NSString *encryptedFilePath; // @synthesize encryptedFilePath=_encryptedFilePath;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)getMsgDescription;
- (_Bool)shouldUploadToCDN;
- (id)getMsgDataPath;
- (id)videoInfo;
- (id)imageInfo;
- (id)fileInfo;
- (id)urlInfo;
- (id)locationInfo;
- (id)musicInfo;
- (id)getDeviceMsg;
- (id)getMessageWrap;
- (void)setParams;
- (id)initWithMessageWrap:(id)arg1;

@end

