//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCPayF2FReceiveDetailSummaryItem;

@interface WCPayF2FReceiveDetailResponse : NSObject
{
    long long _retCode;
    NSString *_retMsg;
    WCPayF2FReceiveDetailSummaryItem *_summaryItem;
    NSArray *_recordList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recordList; // @synthesize recordList=_recordList;
@property(retain, nonatomic) WCPayF2FReceiveDetailSummaryItem *summaryItem; // @synthesize summaryItem=_summaryItem;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;

@end

