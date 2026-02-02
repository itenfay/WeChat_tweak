//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXGBackupMessageItemHandler : NSObject
{
}

+ (void)convertStatusVideo:(id)arg1 roamMsgItem:(id)arg2;
+ (id)onClearVoiceHeadData:(id)arg1;
+ (id)pathForMessageWrap:(id)arg1 forBakChatMediaType:(unsigned int)arg2 withMediaID:(id)arg3;
+ (id)getMediaIDByMessageWrap:(id)arg1;
+ (void)convertStatusVideo:(id)arg1 andBakchatMsgItem:(id)arg2;
+ (id)getMediaHeadByMessageWrap:(id)arg1;
+ (id)messageWrapFromBakChatMsgItem:(id)arg1;
+ (id)bakChatMsgItemForMessageWrap:(id)arg1;

@end

