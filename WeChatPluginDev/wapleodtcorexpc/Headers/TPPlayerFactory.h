//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerFactory : NSObject
{
}

+ (id)createRichMediaASyncRequester;
+ (id)createRichMediaSynchronizer;
+ (id)createConnectMgr;
+ (id)createTPPlayerWithPlayingQueue:(id)arg1 delegateQueue:(id)arg2;
+ (id)createTPPlayerWithPlayingQueue:(id)arg1;

@end

