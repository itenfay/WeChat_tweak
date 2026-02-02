//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMEasterEggActivityDelegate, MMEasterEggActivityInfo;

@protocol MMEasterEggActivity <NSObject>
@property(nonatomic) __weak id <MMEasterEggActivityDelegate> delegate;
@property(retain, nonatomic) NSString *activityId;
@property(readonly, nonatomic) id <MMEasterEggActivityInfo> activityInfo;
- (id)initWithActivityInfo:(id <MMEasterEggActivityInfo>)arg1;

@optional
- (void)easterEggEnd;
- (void)easterEggTapInteractiveUIWithReportString:(id *)arg1;
- (void)easterEggStartWithKeyword:(NSString *)arg1 reportString:(id *)arg2;
@end

