//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSMutableArray;

@interface UploadTaskGenerateProcessor
{
    CMessageWrap *_msgWrap;
    NSMutableArray *_uploadTaskList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *uploadTaskList; // @synthesize uploadTaskList=_uploadTaskList;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)generateUploadTaskWithDataList:(id)arg1;
- (id)getStateName;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

