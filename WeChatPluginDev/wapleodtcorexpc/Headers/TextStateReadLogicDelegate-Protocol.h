//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, TextStateModel;

@protocol TextStateReadLogicDelegate <NSObject>
- (TextStateModel *)getMostRecentTextStateForUsername:(NSString *)arg1;
- (NSDictionary *)getUsernameToMostRecentTextState;
@end

