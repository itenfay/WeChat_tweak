//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPaidCollectionHelper : NSObject
{
}

+ (void)reportProfilePaidCollection:(id)arg1 event:(id)arg2 commentScene:(int)arg3 position:(unsigned long long)arg4;
+ (void)openPaidCollectionFeedListWithJumpParams:(id)arg1;
+ (void)openPaidCollectionDetailWithJumpParams:(id)arg1;
+ (void)openPaidCollectionWithJumpParams:(id)arg1;
+ (id)feedWatchProgressTextWithContentVM:(id)arg1 forchComplete:(_Bool)arg2;
+ (id)consumeButtonTitleWithPaidCollection:(id)arg1;
+ (id)feedCountDescWithPaidCollection:(id)arg1;
+ (id)collectionTypeTagWithPaidCollection:(id)arg1;
+ (id)reportURLWithPaidCollection:(id)arg1;
+ (id)tryOutTipsContentWithPaidCollection:(id)arg1;

@end

