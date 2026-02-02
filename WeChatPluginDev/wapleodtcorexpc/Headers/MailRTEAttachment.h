//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MailRTEAttachment
{
    unsigned int _dataStatus;
    unsigned int _dataSize;
    NSString *_objectId;
    NSString *_objectName;
    NSString *_imagePath;
    NSString *_attachID;
}

+ (id)UIImageWriteToTempFile:(id)arg1;
+ (id)getTempFilePath;
+ (id)DataWriteToTempFile:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID=_attachID;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) unsigned int dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName=_objectName;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (double)getHeightOfAttachment;
- (struct _NSRange)rangeInContent:(id)arg1;
- (id)objectString;
- (void)configAttachmentWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configAttachmentWithImage:(id)arg1;
- (void)configFrameWithWidth:(double)arg1;
- (unsigned int)type;
- (id)init;

@end

