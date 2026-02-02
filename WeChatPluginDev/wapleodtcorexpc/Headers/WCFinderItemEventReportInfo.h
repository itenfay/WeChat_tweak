//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderItemEventReportInfo : NSObject
{
    int _commentScene;
    int _refCommentScene;
    long long _eventCode;
    unsigned long long _eventTime;
    NSString *_eId;
    NSDictionary *_udfKV;
}

- (void).cxx_destruct;
@property(nonatomic) int refCommentScene; // @synthesize refCommentScene=_refCommentScene;
@property(retain, nonatomic) NSDictionary *udfKV; // @synthesize udfKV=_udfKV;
@property(copy, nonatomic) NSString *eId; // @synthesize eId=_eId;
@property(nonatomic) unsigned long long eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) long long eventCode; // @synthesize eventCode=_eventCode;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;

@end

