//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RingToneUtil : NSObject
{
}

+ (void)__SendSeeNewRingTipMsgForFriend:(id)arg1 ring:(id)arg2;
+ (void)SendSeeNewRingTipMsgForFriend:(id)arg1 ring:(id)arg2;
+ (_Bool)IsSeeFriendNewRingTipEnabled;
+ (void)SendSetRingToneMessageFromChat:(id)arg1 isCaller:(_Bool)arg2;
+ (void)RemindReceiverUpdateRingToneFromChat:(id)arg1;
+ (void)RemindCallerSetRingToneFromChat:(id)arg1;
+ (unsigned long long)GetRingSourceTypeBy:(unsigned long long)arg1;
+ (id)GenCircleButtonImage:(id)arg1 coler:(id)arg2;
+ (id)GenTimeStringWith:(int)arg1;

@end

