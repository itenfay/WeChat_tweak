//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPPlayerEventInfo, TPReporterInitParams;
@protocol ITPPlayerInfoGetter, ITPReportChannelDelegate, ITPReportInfoGetter;

@protocol ITPReporter <NSObject>
- (void)reset;
- (void)onEvent:(unsigned long long)arg1 withEvent:(TPPlayerEventInfo *)arg2;
- (void)setPlayerInfoGetter:(id <ITPPlayerInfoGetter>)arg1;
- (void)addReportChannelListener:(id <ITPReportChannelDelegate>)arg1;
- (void)setReportInfoGetter:(id <ITPReportInfoGetter>)arg1;
- (void)setup:(TPReporterInitParams *)arg1;
@end

