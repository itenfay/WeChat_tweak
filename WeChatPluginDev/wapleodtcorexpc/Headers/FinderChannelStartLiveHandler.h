//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FinderChannelStartLiveHandler
{
    NSString *_liveJsonInfo;
    NSString *_openId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *liveJsonInfo; // @synthesize liveJsonInfo=_liveJsonInfo;
- (void)showFailErrorMsg:(id)arg1 title:(id)arg2 respErrMsg:(id)arg3 respErrCode:(int)arg4;
- (void)sendStartChannelLiveResp:(id)arg1;
- (void)onAuthDidCancel;
- (void)onAuthDidFail;
- (void)onAuthDidSuccess;
- (void)createOpenUrl;

@end

