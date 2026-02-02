//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextStateMediaUploadTaskInfo, NSString;

@interface MMTextStateMediaDataPB
{
    MMTextStateMediaUploadTaskInfo *_textStateMediaUploadTaskInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_textStateMediaUploadTaskInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTextStateMediaUploadTaskInfo *textStateMediaUploadTaskInfo; // @synthesize textStateMediaUploadTaskInfo=_textStateMediaUploadTaskInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

