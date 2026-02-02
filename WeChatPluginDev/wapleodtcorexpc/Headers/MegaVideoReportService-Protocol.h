//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString;
@protocol MegaVideoPlayReportSession;

@protocol MegaVideoReportService <NSObject, UnitRCBaseProtocol>
- (id <MegaVideoPlayReportSession>)getPlayReportSession:(NSString *)arg1;
- (void)clearAllPlayReportSession;
- (void)removePlayReportSession:(NSString *)arg1;
- (id <MegaVideoPlayReportSession>)createPlayReportSession;
@end

