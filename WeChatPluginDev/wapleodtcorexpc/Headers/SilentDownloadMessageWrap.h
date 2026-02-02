//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SilentDownloadMessageWrap : NSObject
{
    unsigned int _fileSize;
    unsigned int _createTime;
    NSString *_username;
    long long _mesSvrId;
}

+ (void)initialize;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mesSvrId;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long mesSvrId; // @synthesize mesSvrId=_mesSvrId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

