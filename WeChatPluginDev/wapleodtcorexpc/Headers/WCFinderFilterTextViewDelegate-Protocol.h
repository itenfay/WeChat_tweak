//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, WCFinderFilterTextView, WCFinderUpdateTopicModel;

@protocol WCFinderFilterTextViewDelegate <NSObject>

@optional
- (NSMutableArray *)textGetSelectRangeArray:(WCFinderFilterTextView *)arg1;
- (void)textDidInputAtFinderContact:(WCFinderFilterTextView *)arg1;
- (void)filterTextUpdateTopicModel:(WCFinderUpdateTopicModel *)arg1;
- (void)textDidChangeFinish:(WCFinderFilterTextView *)arg1;
@end

