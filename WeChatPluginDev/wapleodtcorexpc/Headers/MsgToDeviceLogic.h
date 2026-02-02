//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HwClientEncryptFileInfo, ILinkDeviceData, NSMutableArray, NSString;
@protocol MsgToDeviceDelegate;

@interface MsgToDeviceLogic : NSObject
{
    _Bool _cancelSendingDevice;
    int _state;
    id <MsgToDeviceDelegate> _delegate;
    ILinkDeviceData *_deviceData;
    NSMutableArray *_waitingDevices;
    NSString *_fileKey;
    HwClientEncryptFileInfo *_clienEncryptFileInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HwClientEncryptFileInfo *clienEncryptFileInfo; // @synthesize clienEncryptFileInfo=_clienEncryptFileInfo;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool cancelSendingDevice; // @synthesize cancelSendingDevice=_cancelSendingDevice;
@property(retain, nonatomic) NSMutableArray *waitingDevices; // @synthesize waitingDevices=_waitingDevices;
@property(retain, nonatomic) ILinkDeviceData *deviceData; // @synthesize deviceData=_deviceData;
@property(nonatomic) __weak id <MsgToDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startCompressRawVideo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)startNetworkRequest:(id)arg1 withDevice:(id)arg2;
- (void)startNetworkRequest:(id)arg1;
- (void)startWaitingTask;
- (void)uploadMsgToCDN:(id)arg1;
- (_Bool)hasForwardTask;
- (void)cancelForward;
- (void)cancelForwardToDevice:(id)arg1;
- (_Bool)checkFileSize:(unsigned long long)arg1;
- (id)encryptMsgAndSave;
- (void)forwardCdnMsgToDevice:(id)arg1;
- (void)forwardToDevice:(id)arg1;
- (id)initWithMsg:(id)arg1;

@end

