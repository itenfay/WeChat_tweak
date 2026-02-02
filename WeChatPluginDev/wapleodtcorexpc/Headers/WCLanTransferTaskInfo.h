//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface WCLanTransferTaskInfo : NSObject
{
    NSString *_lanClientMsgID;
    NSString *_toUser;
    NSString *_filePath;
    NSString *_lanInfo;
    unsigned long long _fileSize;
    CMessageWrap *_msgWrap;
}

+ (void)initialize;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_lanInfo;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_toUser;
+ (void)PBArrayAdd_lanClientMsgID;
- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *lanInfo; // @synthesize lanInfo=_lanInfo;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *toUser; // @synthesize toUser=_toUser;
@property(copy, nonatomic) NSString *lanClientMsgID; // @synthesize lanClientMsgID=_lanClientMsgID;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

