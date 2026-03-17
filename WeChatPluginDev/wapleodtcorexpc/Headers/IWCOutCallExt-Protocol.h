//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, OnUpdateCallStateWithTextPara;

@protocol IWCOutCallExt <NSObject>

@optional
- (void)OnCheckNumberResp:(unsigned int)arg1 RespCountryCode:(NSString *)arg2;
- (void)didReceiveInviteGap:(int)arg1;
- (void)OnCallEndFinish;
- (void)OnUpdateCallStateWithText:(OnUpdateCallStateWithTextPara *)arg1;
@end

