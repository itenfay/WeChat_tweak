//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderLiveMsgSessionInfo;

@protocol WCFinderLiveMsgSessionMgrExt

@optional
- (void)onFinderLiveMsgSessionUnReadCntUpdated:(unsigned int)arg1 sessionId:(NSString *)arg2;
- (void)onFinderLiveMsgSessionUpdated:(NSString *)arg1;
- (void)onFinderLiveMsgSessionInitiated:(WCFinderLiveMsgSessionInfo *)arg1;
@end

