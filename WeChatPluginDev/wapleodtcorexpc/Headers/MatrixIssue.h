//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MatrixIssue : NSObject
{
    int _reportType;
    NSString *_issueTag;
    NSString *_issueID;
    unsigned long long _dataType;
    NSString *_filePath;
    NSData *_issueData;
    NSDictionary *_customInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) int reportType; // @synthesize reportType=_reportType;
@property(retain, nonatomic) NSData *issueData; // @synthesize issueData=_issueData;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property(copy, nonatomic) NSString *issueTag; // @synthesize issueTag=_issueTag;
- (id)description;

@end

