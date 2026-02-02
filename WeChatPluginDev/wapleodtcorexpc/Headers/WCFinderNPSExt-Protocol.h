//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderNpsSurveyAnswer, FinderNpsSurveyQuestion, NSArray, NSString;

@protocol WCFinderNPSExt <NSObject>

@optional
- (void)onCloseNPS;
- (void)onClickNPSQuestion:(FinderNpsSurveyQuestion *)arg1 answer:(FinderNpsSurveyAnswer *)arg2 inputText:(NSString *)arg3 mutliAnswerIDs:(NSArray *)arg4;
@end

