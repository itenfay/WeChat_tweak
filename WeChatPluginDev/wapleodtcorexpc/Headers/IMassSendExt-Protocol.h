//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MassSendInfo, NSString;

@protocol IMassSendExt

@optional
- (void)onMassNewMsgSent:(CMessageWrap *)arg1 sendInfo:(MassSendInfo *)arg2;
- (void)OnMassSendOK;
- (void)OnMassSendFail:(unsigned int)arg1 WithErrorMsg:(NSString *)arg2;
@end

