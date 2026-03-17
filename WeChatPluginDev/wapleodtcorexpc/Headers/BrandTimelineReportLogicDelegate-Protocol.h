//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTBaseSectionData, BTMsgSectionData, BTRecoFlowSectionData, NSMutableArray;

@protocol BrandTimelineReportLogicDelegate <NSObject>
- (_Bool)onReportGetIsSubsMsgLoadEnd;
- (unsigned int)onReportGetMsgListCount;
- (NSMutableArray *)onReportGetArrSectionData;
- (unsigned long long)getNewMsgSequenceId;
- (unsigned long long)onReportGetIndexForFirstVisibleMsgOrRecoFlowSection;
- (unsigned long long)flowIndexForRecoFlowSectionData:(BTRecoFlowSectionData *)arg1;
- (unsigned long long)indexForBaseSectionData:(BTBaseSectionData *)arg1;
- (unsigned long long)msgIndexFormsgSectionData:(BTMsgSectionData *)arg1;
- (_Bool)isSectionLastNewMsgSection:(long long)arg1;
@end

