//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAJSEventHandler_OpenVoiceBase
{
}

- (id)parseJoinRoomInfo:(id)arg1;
- (struct ReasonModel)generateReasonFromVal:(int)arg1;
- (_Bool)isGame;
- (id)convertFromMemberArrayToDic:(id)arg1;
- (void)addErrCodeToRet:(id)arg1 withErrCode:(int)arg2;
- (int)convertFromNativeErrCodeToUserErrCodeJoin:(int)arg1 errCode:(int)arg2;
- (void)onStopRecord;
- (void)onStartRecord;

@end

