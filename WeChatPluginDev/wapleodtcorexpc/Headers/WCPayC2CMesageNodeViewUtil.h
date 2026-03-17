//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayC2CMesageNodeViewUtil : NSObject
{
}

+ (id)getReceiverIconImgNameWithReceiverState:(unsigned long long)arg1;
+ (id)getPayerIconImgNameWithPayerState:(unsigned long long)arg1;
+ (unsigned long long)getPayerBubbleTypeWithPayerState:(unsigned long long)arg1;
+ (unsigned long long)getReceiverBubbleTypeWithReceiveState:(unsigned long long)arg1;
+ (id)getReceiverTitleWithReceiverState:(unsigned long long)arg1 wordingMember:(unsigned long long)arg2 aaType:(unsigned int)arg3;
+ (id)getPayerTitleWithPayerState:(unsigned long long)arg1 payerAmount:(double)arg2;
+ (id)getCustomizeAAMsgDescWithMsgWrap:(id)arg1;
+ (id)getActivityAAMsgDescWithMsgWrap:(id)arg1;
+ (id)getCommonAASelectMemberMsgDescWithMsgWrap:(id)arg1;
+ (_Bool)isNeedShowMentionedMeMsg:(id)arg1;
+ (id)getAAC2CMessageDescDict:(id)arg1;

@end

