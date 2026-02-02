//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VoicePrintCommunication : NSObject
{
}

+ (void)getResourceWithScene:(unsigned int)arg1 ticket:(id)arg2 useRSA:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getTicketForUsername:(id)arg1 idcRedirectCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getTicketForUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)operate:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteVoicePrintWithCompletion:(CDUnknownBlockType)arg1;
+ (void)switchVoicePrint:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)checkVoicePrintWithCompletion:(CDUnknownBlockType)arg1;

@end

