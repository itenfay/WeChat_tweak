//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveNoticeUtilities : NSObject
{
}

+ (void)setupProfileParams:(id)arg1 fromProfileURLString:(id)arg2;
+ (_Bool)updateNoticeInfo:(id)arg1 noticeList:(id)arg2 withReserveStatus:(unsigned long long)arg3 opType:(unsigned long long)arg4 changedNoticeIds:(id)arg5 failureNoticeIds:(id)arg6 aggregateTypeArray:(id)arg7;
+ (_Bool)updateNoticeInfo:(id)arg1 noticeList:(id)arg2 withNoticeId:(id)arg3 isTop:(_Bool)arg4;
+ (_Bool)updateNoticeInfo:(id)arg1 noticeList:(id)arg2 withNoticeId:(id)arg3 hasPurchase:(_Bool)arg4;
+ (_Bool)updateNoticeList:(id)arg1 withReserveStatus:(unsigned long long)arg2 aggregateTypeArray:(id)arg3 byMatchingNoticeIds:(id)arg4;
+ (_Bool)updateNoticeInfo:(id)arg1 withReserveStatus:(unsigned long long)arg2 byMatchingNoticeId:(id)arg3;

@end

