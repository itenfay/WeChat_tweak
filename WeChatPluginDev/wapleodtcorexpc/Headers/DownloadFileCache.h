//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DownloadFileCache : NSObject
{
    unsigned int _localID;
    unsigned int _lastReadTime;
    NSString *_MD5;
    NSString *_chatName;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastReadTime;
+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_chatName;
+ (void)PBArrayAdd_MD5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastReadTime; // @synthesize lastReadTime=_lastReadTime;
@property(nonatomic) unsigned int localID; // @synthesize localID=_localID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5=_MD5;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

