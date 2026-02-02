//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ITPPlayerProxyDelegate;

@protocol ITPPlayerProxy <NSObject>
@property(nonatomic) __weak id <ITPPlayerProxyDelegate> playerProxyDelegate;
- (_Bool)isPlayIdValid;
- (void)setIsActive:(_Bool)arg1;
- (void)setProxyServiceType:(int)arg1;
- (long long)getProxyPlayState;
- (void)setProxyPlayState:(long long)arg1;
- (void)pushEvent:(long long)arg1;
- (void)resumeDownload;
- (void)pauseDownload;
@end

