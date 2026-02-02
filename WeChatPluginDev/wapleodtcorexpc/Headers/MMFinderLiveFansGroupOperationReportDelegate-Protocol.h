//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMFinderLiveFansGroupOperationReportDelegate <NSObject>
- (void)onReportFansGroupNoticeActionType:(long long)arg1 notice:(NSString *)arg2 level:(unsigned long long)arg3 imageUrl:(NSString *)arg4 visibility:(long long)arg5;
- (void)onReportFansGroupOperationActionType:(long long)arg1;
@end

