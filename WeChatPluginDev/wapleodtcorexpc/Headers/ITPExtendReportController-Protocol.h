//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ITPReportChannelDelegate, ITPReportInfoGetter;

@protocol ITPExtendReportController <NSObject>
- (void)addReportChannelDelegate:(id <ITPReportChannelDelegate>)arg1;
- (void)setReportInfoGetter:(id <ITPReportInfoGetter>)arg1;
@end

